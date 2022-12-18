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

    // Child* c = new Parent(); // Child class는 Parent class보다 더 많은 메모리를 차지하니까 문법적인 에러 발생.

    Parent* p = new Parent(); 

    Child* c = (Child *)p; // p는 Parent만큼의 공간을 할당받았는데, Child만큼의 공간(더 큰 공간)으로 casting되어다.
                           // 문법적 에러는 나지 않지만, 메모리 상 엉뚱한 곳에 연산을 하게 된다.
                           // down casting의 단점이다.
                           // 이를 방지하기 위해 --> dynamic_casting ==> virtual

    c->x = 60;  // x 변수는 Parent class에 있는 변수이기 때문에 정상적인 연산 가능.
    c->y = 999; // y 변수는 Child class에 있는 변수인데, Child형 포인터 c는 Parent class의 크기만 다루기 때문에
                // 엉뚱한 곳의 값을 건들임 --> down casting의 단점

    cout << c->x << endl;
    cout << c->y << endl;


    return 0;
}