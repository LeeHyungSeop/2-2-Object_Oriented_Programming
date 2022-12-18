#include <iostream>

using namespace std;

/*
    C++ 에서, 순수가상함수는 interface를 자식에게 전달하여 재정의 즉 오버라이딩을 하기 위해 사용합니다

    Java의 interface 개념
    C++는 abstract class(virtual function) 이용해서 interface 구현
    interface : 클래스가 반드시 구현해야 할 method들의 목록
*/


class Shape {

public :
    virtual double getArea() = 0; // 순수 가상 함수 선언 방법

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
    cout << t.getArea() << endl;

    Circle c(10.0); // c 객체에만 빨간줄 -> getArea()에 대해서 정의해줘야 하지만, get_Area()로 했기 때문에 에러가 난다.
    cout << c.getArea() << endl;

    Rect r(10, 10);
    cout << r.getArea() << endl;

    // ------------------------------------------------------------

    // Shape* s1 = new Triangle(10,10);
    // Shape* s2 = new Circle(10);
    // Shape* s3 = new Rect(10,10);

    // cout << s1->getArea() << endl;
    // cout << s2->getArea() << endl;
    // cout << s3->getArea() << endl;

    return 0;
}