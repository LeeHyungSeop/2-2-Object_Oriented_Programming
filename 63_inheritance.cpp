#include <iostream>

using namespace std;

/*
    상속. inheritance

    ==> 생산성을 위한 필수 개념

    public은 무조건 상속됨!!
    private은 상속되지 않음!!
    protected는 자식한테는 private처럼 상속가능. 외부에서는 접근할 수 없다!!!
*/

class A {

private:
    // int a;   --> private은 상속이 안되는 것을 확인해보기 위해

protected :
    // int a; // --> 자식한테만 private을 상속할 수 있다. 하지만 여전히 외부에서는 private이다.

public :
    int a;
    int b;

    A() {
        a = 10;
        b = 20;
    }
    void showAB() {
        cout << a << " , " << b << endl;
    }

};

           // A를 받아온 것을 어떻게 쓸 것인가? --> public으로 쓰겠다.
class AA : public A {
    // AA는 아무런 데이터가 없더라도 A로부터 상속받은 a, b가 있다.

public:
    int c;

    int showABSum() {
        cout << (a+b) << endl;
    }
};

class AAA : public AA {

public :


};

int main(void){

    AA aa;
    cout << aa.a << " , " << aa.b << endl;
    aa.showAB();
    aa.showABSum();

    cout << " ------------- " << endl;

    AAA aaa;
    aaa.showAB();
    aaa.showABSum();
    aaa.a = 20;
    aaa.b = 30;
    aaa.c = 999;

    cout << " ------------- " << endl;

    return 0;
}