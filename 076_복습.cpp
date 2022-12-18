
#include <iostream>

using namespace std;

/*
    polymorphism , 다형성 : 어떤 method를 호출할 것인지, 그 때 그 때 다르다!!

        OOP 1. : information hiding(정보은닉)
            -> access specifier(접근지정자) : private, public, protected
        OOP 2. : inheritance
            -> reusability (코드 재사용성)
            -> parent's protected : child에게는 public, 외부에는 private

    binding : static binding, dynamic binding (프로그램 하고 나서, virtual을 통해 overriding된 함수를 찾아 실행)

    upcasting   : 자식 객체를 부모 클래스 포인터로 가리키기 (합법) -> Child Class의 memory leak 해결을 위해 Parent Class에 virtual을 붙여야 한다
    downcasting : 부모 객체를 자식 클래스 포인터로 가리키기 (합법, but 위험)

    Dynamic binding : virtual (method 앞에 붙는다)
*/
class A {

public :
    void showMe() {
        cout << "parent\n";
    }
    // virtual void showMe() {
    //     cout << "parent\n";
    // }
};

class B : public A {

public : 
    void showMe(){
        cout << "child\n";
    }

};

int main() {

    B* pb = new B();
    A* pa = nullptr;
    pa = pb; // upcasting

    pa->showMe(); // virtual showMe()라면, child출력. 
                  //그냥 showMe()라면 parent출력
    pb->showMe(); 
    return 0;
}