#include <iostream>

using namespace std;

/* 
    operator overloading

*/

class MyVector {

private :
    int x,y;

public :
    MyVector(int _x, int _y) : x(_x), y(_y) {

    }
    void showXY() {
        cout << "x : " << x << ", y : " << y << endl;
    }

    // 직접 작성한 method (편리성, 가독성 떨어짐)
    MyVector addTwoVectors(MyVector& v) {
        MyVector temp(this->x + v.x, this->y + v.y);
        return temp;
    }

    // operator overloading 사용법
    MyVector operator+ (MyVector& other) {
        cout << "첫번째 더하기 overloading\n";
        MyVector temp(this->x + other.x, this->y + other.y);
        return temp;
    }
    bool operator== (MyVector& other) {
        if(this->x == other.x && this->y == other.y){
            return true;
        }
        return false;
    }
    MyVector* operator+(MyVector* other) {
        cout << "두번째 더하기 overloading\n";
        MyVector* temp = new MyVector(this->x + other->x, this->y + other->y);
        return temp;                   
    }
};

int main(void){

    MyVector* v1 = new MyVector(10, 15);
    MyVector v2(20, 25);
    MyVector* v3 = new MyVector(30, 35);

    MyVector v4 = *v1 + v2;
    v4.showXY();

    MyVector* v5 = *v1 + v3;
    v5->showXY();


    return 0;
}