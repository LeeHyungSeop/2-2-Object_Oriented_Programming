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
    
    
    MyValue& operator++() { // prefix increment operator
        this->x = this->x + 1;
        return *this;
    }

    MyValue& operator++(int) { // postfix increment operator
        this->x = this->x + 1;
        return *this;
    }

};

int main(void){

    MyValue v1(10);

    MyValue k = v1++;

    k.showMyValue();  // 10
    v1.showMyValue(); // 11

    // (1)
    // (v1++)++;  // v1은 한번만 ++됌. (v1++)은 복사본이 넘어왔기 때문에 (v1++)에서 한번만 됌
    // v1.showMyValue(); // 11

    // (2)
    ++(v1++); // 복사본 + 1 시키고, v1을 +1 시킨다 는 의미
    v1.showMyValue(); // 12

    // (3)
    // (++v1)++; 
    // v1.showMyValue(); // 13

    

    return 0;
}