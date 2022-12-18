#include <iostream>
#include <windows.h> // windows 운영체제에서 제공하는 header파일

using namespace std;

class Circle {

public : 
    int x,y, radius;
    string color;

    double calcArea() {
        return 3.14 * radius * radius;
    }

    void draw () {
        HDC hdc = getWindowDC(GetForeGroundWindow());
        Ellipse(hdc, x-radius, y-radius, x+radius, y+radius);
    }
};

int main(void){

    Circle c;

    c.x = 200;
    c.y = 200;
    c.radius = 100;
    c.draw();

    return 0;
}