#include <iostream>
#include <vector>
#include <string>

using namespace std;

/* 

    friend function , friend class

*/

// private : 접근지정자. access specifier (class에 있는 함수를 통해서만 접근 가능하다)
// ==> OOP의 중요한 개념인 information hiding(정보은닉) : 객체 내부의 private은 객체 내부의 함수를 통해서만 접근
// ==> 코드 security & safety를 위해서 중요

class A{

    int a;

public :

    A(int _a) : a(_a) {

    }

    void setA(int _a) { // a값을 설정하는데, 음수값은 안들어오도록
        if(_a < 0) {
            a = 0;
        }
        else {
            a = _a;
        }
    }

};

int main(void){

    A obj(20);

    cout << obj.a << endl; // A class의 a는 private member variable이기 때문에 접근 불가. ---> OOP의 특징 중 정보은닉

    return 0;
}