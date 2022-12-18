#include <iostream>

using namespace std;

/*
    생성자와 소멸자

    부모 class의 생성자부터 호출됨
    자식 class의 소멸자부터 호출됨
*/

class A {

private:

protected:   // 외부에서는 private, 자식에게는 public
    int a;

public :
    int b;

    A() {
        cout << "부모 A 생성자1" << endl;
        a = 10;
        b = 20;
    }
    A(int _a, int _b) : a(_a) , b(_b) {
        cout << "부모 A 생성자2" << endl;
    }

    ~A() {
        cout << "부모 A 소멸자" << endl;
    }
    void showAB() {
        cout << a << " , " << b << endl;
    }

};

class AA : public A {

public: 
    int c;

    AA() : A(21, 31) { // 부모 A 생성자2가 불림
        cout << "자식 AA 생성자" << endl;
    }
    
    ~AA() {
        cout << "자식 AA 소멸자" << endl;
    }
    int showABSum() {
        cout << (a+b) << endl;
    }
};

class AAA : public AA {

public :
    AAA() {
        cout << "자식 AAA 생성자" << endl;
    }    
    ~AAA() {
        cout << "자식 AAA 소멸자" << endl;
    }

};

int main(void){

    AA aa; 


    return 0;
}