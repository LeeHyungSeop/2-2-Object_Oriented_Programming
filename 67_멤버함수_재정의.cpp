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
    - 자식 클래스에서 정의한 method가 동일한 signature(함수 이름, 파라미터)를 가진
      부모 클래스의 method를 가려버리는 현상 (일식, 월식처럼)
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
    void whoareyou() {
        // Parent::whoareyou(); // 부모 클래스의 whoareyou() method를 부르는 경우
        cout << "Child Method" << endl;
    }

};

int main(void) {

    Child c;
    c.whoareyou(); // Child (child에 있는 method가 parent에 있는 method를 올라 탐 -> override)
    c.Parent::whoareyou(); // 부모의 whoareyou(); method를 부르고 싶다면

    Parent p;
    p.whoareyou(); // Parent

    return 0;
}