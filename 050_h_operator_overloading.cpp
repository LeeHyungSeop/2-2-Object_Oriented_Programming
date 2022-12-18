#include <iostream>

using namespace std;

/* 
    operator overloading
        기본 자료형에 대해서는 안된다
        반드시, 객체에 대해서만 operator overloading이 된다.

        + 새로운 연산자를 만들 수는 없음. 기존의 연산자로만.
        --> !!! ?!? ?*  이러한 새로운 형태의 연산자 정의가 안됌
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
    MyVector* operator+(MyVector* other) {
        cout << "두번째 더하기 overloading\n";
        MyVector* temp = new MyVector(this->x + other->x, this->y + other->y);
        return temp;                   
    }

    bool operator== (MyVector& other) {
        if(this->x == other.x && this->y == other.y){
            return true;
        }
        return false;
    }
    bool operator!= (MyVector& other) {
        return !(*this == other);  // this는 포인터니까 객체로 바꾸기 위해 *this
    }

};

int main(void){

    MyVector v1(10, 10);
    MyVector v2(20, 20);

    // MyVector v3 = v1 + v2; // (30, 30)을 원하지만, 객체끼리 더하는 것에 대해서 정의가 안되어 있기 때문에. 오류 발생.

    cout << "-----------------\n";
        
    MyVector v3 = v1.addTwoVectors(v2);
    v3.showXY(); 
        /*
            위와 같이 addTwoVectors(); method를 만들어야 하는데,
            가독성과 편리하지 않기 떄문에 이러한 객체끼리의 연산을 가능하게 하는 것이
            operator overoading이다.
        */

    cout << "-----------------\n";

    // operator overloading
    MyVector v4 = v1 + v2;
    v4.showXY();
    cout << boolalpha;
    cout << "Same? " << (v1 == v2) << endl;
    cout << "Not Same? " << (v1 != v2) << endl;
    cout << noboolalpha;

    cout << "-----------------\n";

    MyVector* p5 = v1 + &v2;
    p5->showXY();

    return 0;
}