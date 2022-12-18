#include <iostream>

using namespace std;

class P2{

public:
    ~P2() {
        cout << "P2 소멸자" << endl;
    }
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

    C2* c = new C2();

    delete c; // memory leak이 없음. 문제 없음

    return 0;
}