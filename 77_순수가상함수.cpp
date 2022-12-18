#include <iostream>

using namespace std;

/*
    순수 가상 함수 : pure virtual method(function)

        class마다 공통적으로 만들어야할 method를 선언해줌으로써
        상속받은 객체들에 대해서 해당 method를 구현할 수 있도록
        --> 이것을 인터페이스라고 한다.

        Java의 interface 개념
        C++는 abstract class(virtual function) 이용해서 interface 구현
        interface : 클래스가 반드시 구현해야 할 method들의 목록

    virtual method가 있는 class로부터 객체를 만들어내지 못한다!
    하위 클래스에서 반드시 해당 method를 구현시키도록 하기 위해 virtual method를 정의. 
    하위 클래스에 virtual method에 대한 정의가 없으면 컴파일 에러 발생하기 때문
*/

class A {

public :
    // virtual void showMe() { // --> 형체가 있으니 순수 가상 함수가 아니다.
    //     cout << "parent\n";
    // }
    virtual void showMe() = 0; // --> 이것이 순수 가상 함수. 형체 없이 이름만 있음.
                               /*
                                    상식적으로 생각했을 때, showMe() 함수는 아무런 정의가 돼있지 않기 때문에
                                    class A로 부터 객체를 생성할 수 없다.
                                    == pure virtual method를 가진 클래스를 특별히 abstract class(추상 클래스)라 하고,
                                        abstract class로부터는 객체를 만들어내지 못한다.
                               */
};

// (1)
// class B : public A {

// };

// (2)
class B : public A {
        
public : 
    void showMe(){
        cout << "child\n";
    }
};

// (3)
class C : public A {

public :
    void showMe() {
        cout << "This is class C\n";
    }

};


int main(void){

    // (1)
    // B b; // error난다. class A의 virtual method showMe()에 대한 구현이 없기 때문에.
    // b.showMe();

    // (2)
    B b; // error난다. class A의 virtual method showMe()에 대한 구현이 없기 때문에.
    b.showMe();

    // (3)

    return 0;
}