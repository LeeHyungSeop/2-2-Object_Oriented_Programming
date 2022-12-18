#include <iostream>

using namespace std;

// constructor : 객체의 멤버 변수에 초기값을 주기 위한 함수. (반환값이 없다. 함수명 = class명)
// polymorphism 지원, default argument 지원

class Circle {

public :
    int x;
    int y;
    int r;

    Circle(int _x, int _y, int _r) {
        cout << "circle constructor was invoked (x, y, r 초기화)" << endl;
        x = _x;
        y = _y;
        r = _r;
    }
    Circle(int _r) {
        cout << "circle constructor was invoked (r만 초기화)" << endl;
        r = _r;
        x = y = 0;
    }
    Circle() {
        cout << "circle constructor was invoked (아무것도 초기화 X)" << endl;
        x = y = r = 0;
    }

    void showCircleInfo() {
        cout << x << " " << y << " " << r << endl;
    }
    
};

int main(void){
    // constructor를 이용하여 초기값 설정
    Circle c(10,10,30);
    c.showCircleInfo();

    Circle c2(100);
    c2.showCircleInfo();

    Circle c3;
    c3.showCircleInfo();
    
    

    return 0;
}