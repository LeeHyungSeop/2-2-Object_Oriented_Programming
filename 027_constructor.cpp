#include <iostream>

using namespace std;

// constructor : 객체의 멤버 변수에 초기값을 주기 위한 함수. (반환값이 없다. 함수명 = class명)
// polymorphism 지원, default argument 지원

class Circle {

public :
    int x;
    int y;
    int r;
    
    Circle(int _x) {
        _x = 10;
    }

    void showCircleInfo() {
        cout << x << " " << y << " " << r << endl;
    }
    
};

class Circle2 {

public :
    int x;
    int y;
    int r;
    
    Circle2() {
        x = 10;
    }

    void showCircleInfo() {
        cout << x << " " << y << " " << r << endl;
    }
    
};

int main(void){
    
    Circle c(10);
    c.showCircleInfo();

    Circle2 dc; // default parameter에 아무런 인수를 전해주지 않을때 ()을 붙이면 안된다 
    dc.showCircleInfo();
    

    return 0;
}