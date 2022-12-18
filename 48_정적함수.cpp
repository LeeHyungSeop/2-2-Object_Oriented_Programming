#include <iostream>

using namespace std;

/*
    static method(function)의 제약사항
    - 반드시 static variable이나 다른 static method만 사용할 수 있다

    non-static method는 static-method를 부를 수 있을까?
    - 있다.
*/

class MyObj {

private :

    int i;
    float j;

public :

    static int k; 
    MyObj(int _i, float _j) : i(_i), j(_j) {}
    void showMyContents() {
        cout << "i : " << i << " , j : " << j << endl;
        cout << "k : " << k << " (정적변수)" << endl;
    }
    
    static void showStatics() {
        cout << "I am a static function, method\n";
        cout << k << endl; // k는 객체가 없어도 존재할 수 있는 변수이므로 다룰 수 있음. 정상 동작.
        // cout << i;   // static function이기 때문에 member variable을 다룰 수 없음. error 발생.
    }

};

int MyObj::k = 10; 

int main(void){

    MyObj::showStatics(); // static 함수이기 때문에 이렇게 객체를 만들지 않아도 부를 수 있다
                          // 단, member variable을 다루지 못함 -> showStatics()



    return 0;
}