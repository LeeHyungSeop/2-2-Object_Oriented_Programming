#include <iostream>

using namespace std;

/*
    function overloading
    - 함수 이름이 같아도, parameter 개수, type, 순서가 다르면 다른 함수로 인식
    
    method overloading
    - 클래스 정의에 적용된 function overloading 
    
    overloading : 1개 이름에 여러 개 함수를 부착해서, 힘들게 overload한다라는 의미
    overloading VS overriding

    method overriding
    - 클래스에만 적용 == OOP에서만 해당하는 이야기
    - 상속 관계에서만 발생
*/
class Parent {

public:
    void whoareyou() {
        cout << "Parent Method" << endl;
    }

};

// Parent로부터 상속받아서 Child class 생성
class Child : public Parent {

public :


};

int main(void) {

    Child c;

    c.whoareyou(); // Parent Method를 Child 객체인 c가 overriding

    return 0;
}