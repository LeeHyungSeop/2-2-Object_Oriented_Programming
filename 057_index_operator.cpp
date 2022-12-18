#include <iostream>

using namespace std;

/*
    [] : index operator overloading
*/

class MyValue {

    int x;

public :
    MyValue(int _x) : x(_x) {

    }
    void showMyValue() {
        cout << "My Value is : "<< this->x << endl;
    }
    
    
    int operator[](int k){   // [k] 로 받아들여진다 (c++ 문법)
        if(k<50){
            return -999;
        }
        else{
            return 999;
        }
    }

};

int main(void){

    MyValue v1(10);
    
    cout << v1[30]  << endl; // 배열의 내용이 객체들이라면 int operator()가 먹히지 않음 -> 그것은 배열이기 때문에, 배열의 [] operator가 작용
                             // operator overloading은 객체에 대해서만 작용하기 때문에

    

    return 0;
}