#include <iostream>

using namespace std;

/*
    생성자와 소멸자

    부모 class의 생성자부터 호출됨
    자식 class의 소멸자부터 호출됨
*/

class A {

private:

protected:
    int a;

public :
    int b;

    A() {
        cout << "부모 A 생성자" << endl;
        a = 10;
        b = 20;
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

    AA() {
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

    // AA aa; 
        /*
            부모 A 생성자
            자식 AA 생성자
            자식 AA 소멸자
            부모 A 소멸자
        */

    AAA aaa;
        /*
            부모 A 생성자
            자식 AA 생성자
            자식 AAA 생성자
            자식 AAA 소멸자
            자식 AA 소멸자
            부모 A 소멸자
        */

    return 0;
}