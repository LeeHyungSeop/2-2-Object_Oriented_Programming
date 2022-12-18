#include <iostream>

using namespace std;

/*
    ++ : increment operator



*/

class MyValue {

    int x;

public :
    MyValue(int _x) : x(_x) {

    }
    void showMyValue() {
        cout << "My Value is : "<< this->x << endl;
    }

    // void operator++() {
    //     this->x = this->x + 1;
    //     return;
    // }

    // --------------------------------------------

    // (1) 틀린 방법 : 이러면 복사본이 넘어가서 ++(++v1)이 안됌
    // MyValue operator++() {
    //     this->x = this->x + 1;
    //     return *this;
    // }

    // (2) 옳음 방법 : return type을 복사본 말고 주소를 넘겨야 함
    MyValue& operator++() {
        this->x = this->x + 1;
        return *this;
    }

};

int main(void){

    MyValue v1(10);

    v1.showMyValue(); // 10

    // (1)
    // ++v1;
    // v1.showMyValue(); // 11

    // // (2)
    // ++v1;
    // ++v1;
    // v1.showMyValue(); // 12



    // // (3)
    // ++(++v1); // return type이 복사본이었다면 
    // v1.showMyValue(); // 11


    // // (4)
    ++(++v1); // return type이 reference 었다면 
    v1.showMyValue(); // 12


    return 0;
}