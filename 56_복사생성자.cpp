#include <iostream>

using namespace std;

/*
    = : 대입 operator
*/

class MyValue {

    int x;

public :
    MyValue(int _x) : x(_x) {

    }
    void showMyValue() {
        cout << "My Value is : "<< this->x << endl;
    }
    
    
    MyValue& operator++() { // prefix increment operator
        this->x = this->x + 1;
        return *this;
    }

    MyValue& operator++(int) { // postfix increment operator
        this->x = this->x + 1;
        return *this;
    }

    // 대입 연산자의 overloading 

    // (1) 가장 옳은 방법
    MyValue& operator=(const MyValue& other){ // reference로 받아왔으니, 원본 내용을 보호하기 위해
        this-> x = 2*other.x;
        return *this;
    }

    // (2)
    // MyValue operator=(const MyValue& other){ // 복사본으로 return해도 되지만, 메모리 효율성 때문에 쓰지 않는다 (문제는 없음)
    //     this-> x = 2*other.x;
    //     return *this;
    // }

    // (3)
    // void operator=(const MyValue& other){ // chainning 대입연산을 했을 때, void로 하면 문제 발생.
    //     this-> x = 2*other.x;
    //     return;
    // }

};

int main(void){

    MyValue v1(10);
    MyValue k = v1; // 복사 생성자, copy constructor

    MyValue v2(20);
    k = v2;         // 대입 연산자, assignment operator (두 배를 하여 대입할 것이면, this-> x = 2*other.x; )

    k = v2 = v1;    // void를 k에 넣을 수 없으니까 ( overloading할 때, return type을 void operator=() {}  을 쓰지 않는다)
                    // return type을 MyValue& 또는 MyValue로 한 이유 (return type MyValue은 메모리 효율성 때문에 사용을 피하는 것이 좋다)

    k.showMyValue(); // 40

    return 0;
}