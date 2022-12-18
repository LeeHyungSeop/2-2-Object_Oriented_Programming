#include <iostream>
#include <windows.h>

using namespace std;

/*
    x좌표를 200부터 600까지 50씩 증가시키면서 원을 그려보시오
*/

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

int main(){

    Circle c;
    c.y = 500;

    for (auto i = 200; i < 600; i+=50)
    {
        c.x=i;
        c.draw();
    }
    

    return 0;
}
