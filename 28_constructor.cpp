#include <iostream>

using namespace std;

class Circle {

public :
    int x;
    int y;
    int r;
    
    // constructor를 이렇게 간편하게 축약 가능
    Circle(int _x, int _y, int _r) : x(_x), y(_y), r(_r) {}

    void showCircleInfo() {
        cout << x << " " << y << " " << r << endl;
    }
    
};

int main(void){

    // constructor를 이용하여 초기값 설정
    Circle c(10,10,30);
    c.showCircleInfo();
    


    return 0;
}