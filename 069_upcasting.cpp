#include <iostream>

using namespace std;

/*
    다형성, polymorphism
    -> 어떤 멤버 함수를 부를지, 그때그때 상황에 따라 달라진다

    정적 polymorphism : method overriding
    동적 polymorphism : dynamic binding

*/

class Parent {

public :
    int x;

};

class Child : public Parent {

public :
    int y;

};

int main(void) {

    /*
        upcasting 
        : 부모 클래스 타입의 포인터로 자식클래스의 객체를 가리키는 일
          그렇지만 부모 클래스 타입의 포인터로 자식 클래스의 멤버 변수를 건드릴 수는 없다.
    */
    Parent* p = new Child(); 
                            
    p->x = 10; // x는 parent의 멤버변수라 가능
    cout << p->x << endl;
    // p->y = 30; // y는 parent의 멤버변수가 아니기 때문에 불가능. 에러.
    // cout << p->y << endl;

    return 0;
}