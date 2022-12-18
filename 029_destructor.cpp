#include <iostream>

using namespace std;

/*
    destructor (소멸자) != constructor
    ~[class명]
        객체가 사라질때, 자동적으로 불린다.
        따로 안만들어줘도 된다

        destructor가 있는 이유? 
            객체가 생성, 실행되면서 생성되는 메모리들이 있다.
            예를 들어 constructor에서 동적할당을 했는데, 해제를 안해주면 안되기 때문에
            destructor가 해준다. 

*/

class Circle {

public :
    int x;
    int y;
    int r;
    
    // constructor를 이렇게 간편하게 축약 가능
    Circle(int _x, int _y, int _r) : x(_x), y(_y), r(_r) {
        // p = malloc(10000);
    }
    
    // destructor
    ~Circle() {
        cout << "destructor was invoked" << endl;
    }

    void showCircleInfo() {
        cout << x << " " << y << " " << r << endl;
    }
    
};

int main(void){

    Circle c(10,10,30);
    c.showCircleInfo();
    

    return 0;
}