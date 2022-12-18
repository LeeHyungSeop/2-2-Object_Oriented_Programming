#include <iostream>

using namespace std;

class P2{

public:
    virtual ~P2() { // virtual을 사용하여 Child의 소멸자를 부르고 메모리 해제 -> memory leak 해결
        cout << "P2 소멸자" << endl;
    }
    // ~P2() {   // -> C2로 만든 new int[40]에 대한 memory leak 발생
    //     cout << "P2 소멸자" << endl;
    // }
};

class C2 : public P2{

public:
    int* p;
    C2() {
        p = new int[40];
    }
    ~C2() {
        delete[] p;
        cout << "C2 소멸자" << endl;
    }
};

int main(void) {

    P2* p = new C2(); // upcasting

    delete p; // C2는 P2 + int p[40]을 만들었지만
              // delete할 때는 P2에 대해서만 했기때문에 Memory leak 발생. (upcasting 때문에 발생한 문제)

    // ~P2() 앞에 virtual이 붙여졌다면? --> C2 소멸자가 먼저 불려서 memory leak을 해결할 수 있다

    // 따라서 upcasting을 사용했다면, 안전하게 하기 위해 소멸자에 virtual을 작성해줘야 한다.

    return 0;
}