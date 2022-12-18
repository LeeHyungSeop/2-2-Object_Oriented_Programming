#include <iostream>

using namespace std;

/*
    다형성, polymorphism
    -> 어떤 멤버 함수를 부를지, 그때그때 상황에 따라 달라진다

    정적 polymorphism : method overriding
        컴파일 시점에서 일어나고 프로그램 실행 과정에서 변하지 않고 유지되는 바인딩
        장점 : 컴파일시 정보가 결정되기 때문에 속도가 빠르며 에러를 조기에 발견 가능.
        단점 : 컴파일 이후 변경을 못함
    동적 polymorphism : dynamic binding (virtual, z)
        바인딩을 실행시간에 결정하도록 미루었다가 가상 함수 호출시 오버라이딩된 함수를 동적으 찾아 호출한다

*/

class Parent {

public :
    int x;

    virtual void showme(){

    }

};

class Child : public Parent {

public :
    int y;

};

int main(void) {

    Parent* p = new Parent();

    Child* c = dynamic_cast<Child*>(p);

    c->x = 50;
    c->y = 999;


    return 0;
}