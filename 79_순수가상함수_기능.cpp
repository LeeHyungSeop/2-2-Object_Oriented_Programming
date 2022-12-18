#include <iostream>

using namespace std;

// Java의 interface 개념
// C++는 abstract class(virtual function) 이용해서 interface 구현
// interface : 클래스가 반드시 구현해야 할 method들의 목록


class Shape {

public :
    virtual double getArea() = 0;

};

class Triangle : public Shape{

private :
    int width, height;

public :
    Triangle(int _w, int _h) : width(_w) , height(_h) {}
    double getArea() {
        return (double)(0.5 * width * height);
    }
};

class Circle : public Shape{

private :
    double r;

public :
    Circle(double _r) : r(_r) {}
    // double get_Area() { // Circle class만 getArea를 get_Area라고 선언
    //     return (double)(3.14 * r * r);
    // }
    double getArea() { // getArea()라고 해야 에러 방지
        return (double)(3.14 * r * r);
    }

};

class Rect : public Shape{

private :
    double width, height;

public :
    Rect(double _w, double _h) :width(_w), height(_h) {}
    double getArea() {
        return (double)(width * height);
    }

};

int main(void){

    Triangle t(10, 10);
    Circle c(10.0); 
    Rect r(10, 10);

    // t.getArea();
    // c.getArea();
    // r.getArea();


    // Shape class로 객체를 만들 수 없음(getArea()에 대한 구현이 없기 떄문에).
    // 하지만 upcasting, 순수가상함수를 통하여 interface사용 가능.
    // 객체는 여러개의 interface 사용 가능. -> 그래서 다중 상속을 사용!!!
    Shape* s[3];
    s[0] = &t;
    s[1] = &c;
    s[2] = &r;

    for (int i = 0; i < 3; i++) {
        cout << s[i]->getArea() << endl;
    }
    

    return 0;
}