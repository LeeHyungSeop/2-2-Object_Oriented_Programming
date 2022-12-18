#include <iostream>

using namespace std;

/*
    multiple inheritance

    소프트웨어공학적으로 봤을 때, 좋지 않은 프로그래밍 방법이다. (어느 부모 클래스에 대한 값 처리인지 지정해야 한다)
*/

class A{

public :
    int x;

};

class B{

public :
    int x;

};

class C : public A, public B {

};

int main(void) {

    C cc;

    // cc.x = 10;  // 이렇게 하면 어디의 x인지 모른다
    
    cc.A::x = 10;
    cout << cc.A::x << endl;
    cc.B::x = 20;
    cout << cc.B::x << endl;


    return 0;
}