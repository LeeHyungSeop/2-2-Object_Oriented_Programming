#include <iostream>

using namespace std;

// 1. Encapsulation (캡슐화) --> class에 변수와 그것에 대한 함수
// 2. Information hiding (정보은닉) : private. 정보보안 (pubic, private, protected)
                                                // protected : 밖에서는 private, 상속받은 자식한테는 public
// 3. Inheritance (상속) : 
// 4. Polymorphism (다형성) : overloaded function, overloaded method

class Circle {

protected :
    int x;
    int y;
    int r;

public :
    void increase_radius(int d) {   // 1. Encapsulation
        x = 20; // class 안에서 작성
        r += d;
    }
    void increase_radius(float d) {   // 4. overloaded method
        x = 20; // class 안에서 작성
        r += d;
    }

private : // 2. 정보 은닉
    int x2;
    int y2;
    int r2;

    void increase_radius2(int d) {
        x2 = 20; // class 안에서 작성
        r2 += d;
    }

};

class ColoredCircle : public Circle {   // 3. 상속

private :
    string color;

};

int main(void){

    Circle c;
    
    ColoredCircle cc;


    cc.x = 1;
    cc.y = 2;
    cc.r = 3;
    cout << cc.x << " " << cc.y << " "<< cc.r << " " <<endl;


    return 0;
}