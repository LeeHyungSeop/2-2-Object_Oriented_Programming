#include <iostream>

using namespace std;
    /*
        object oriented programming, OOP (객체지향 프로그래밍)
            class : struct + struct 안의 value 처리능력(코드,함수)

        procedural programming (절차지향 프로그래밍)
            procedure --> function
            단점 : data와 function이 분리

        객체는 무엇으로 이루어지는가?

            1. member variable == member field

            2. member function == method 
        
    */

class Point {
    int x;      // 1. member variable == member field
    int y;

    void add() {    // 2. member function == method (function이라고 잘 안한다)
        return x + y;
    }
};

int main() {

    Point a;    // class 타입을 갖는 a, b를 객체라고 한다.
    Point b;
        /*
             class와 object는 다르다. class는 datatype이다.
             class는 구조체 + 함수(method)

             class 타입을 갖는 a, b를 객체(=instance)라고 한다.
        */

    a.x = 10;
    a.y = 20;
    b.x = 100;
    b.y = 200;

    // class는 객체의 설계도

    return 0;
}