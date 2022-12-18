#include <iostream>
#include <vector>
#include <string>

using namespace std;

/* 
    friend function , friend class

    OOP 프로그래밍 언어의 특성상 friend는 좋지 않은 프로그래밍 방법이다. 정보은닉을 위배하는 문법이다.
    사용하지 않는 것이 좋다.
    OOP 프로그래밍 언어에 위배되는 기능.. 

*/

// private : 접근지정자. access specifier (class에 있는 함수를 통해서만 접근 가능하다)
// ==> OOP의 중요한 개념인 information hiding(정보은닉) : 객체 내부의 private은 객체 내부의 함수를 통해서만 접근
// ==> 코드 security & safety를 위해서 중요

class A{

private:
    int a;

public :
    friend void showA(A _a); // 함수 선언
    friend class B;

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

class B {

public :
    B() {

    }
    void showA(A _a) {
        cout << _a.a << endl;
    }
};

void showA (A _a) {
    cout << _a.a << endl;
    _a.setA(-777);
    cout << _a.a << endl;
    _a.a = -666;
    cout << _a.a << endl;
}

int main(void){

    A obj(20);

    // cout << obj.a << endl;
    showA(obj);

    return 0;
}