#include <iostream>

using namespace std;

/*
    class Template : class를 만들어냄

    class          : object, instance를 만들어냄

*/

template <typename T>

class Box {

private :
    T data;
    T name;

public :
    Box() {}
    Box(T _data) : data(_data) {}
    
    T getData() {
        return data;
    }

};


int main(void){

    // Box b1(10);
    // class를 먼저 만들어야 object를 만들 수 있다

    // 1. int를 data로 갖는 class를 class template으로부터 만든다
    Box<int> b1(10);
        /*
            vector<int> b1(10);
            
            vector도 결국 class template이었다.
            따라서 <int>로 type을 지정해서 사용했던 것이다.
        */

    // 2. 만들어진 클래스 Box<int>로부터 객체를 만든다
    cout << b1.getData() << endl;

    return 0;
}