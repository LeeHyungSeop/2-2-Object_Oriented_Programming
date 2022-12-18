#include <iostream>
#include <string>

using namespace std;

/*
    pointer operator overloading
*/

// 직접 구현하는 스마트 포인터 
template <typename T> 
class MyIntegerPtr {

    T* p;

public :

    MyIntegerPtr(T* _p) : p(_p) {

    }
    ~MyIntegerPtr() { // 스마트 포인터가 되는 핵심, destructor에서 delete를 안해주면 Memory leak
        delete p;
    }

    // 직접 구현한 스마트 포인터를 통해 값을 가져오기 위해 operator overloading을 사용
    T& operator* () {
        return *p;
    }

};

int main(void){

    // 스마트 포인터. 객체로 만든 이유 -> destructor가 불릴 때 delete해주기 위해
    while (true) {
        // MyIntegerPtr<int> p(new int(40)); 
        MyIntegerPtr<string> p(new string("Hello world")); 
        
        // unique_ptr<int> p(new int(40));   ---> 그래서 여기서 p는 객체이다.

        cout << *p << endl; // 실제로 포인터가 아니라 안되지만, 객체니까 operator overloading을 이용해서 구현하면 된다!
    }



    // while (true) {
    //     MyIntegerPtr* p = new MyIntegerPtr(new int(40)); // 메모리 누수
    // }


    return 0;
}