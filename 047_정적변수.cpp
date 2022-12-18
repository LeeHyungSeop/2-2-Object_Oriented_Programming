#include <iostream>

using namespace std;

class MyObj {

private :

    int i;
    float j;

public :

    static int k; // MyObj 클래스를 이용하여 객체를 만들어도 k는 only one copy이다.
    MyObj(int _i, float _j) : i(_i), j(_j) {}
    void showMyContents() {
        cout << "i : " << i << " , j : " << j << endl;
        cout << "k : " << k << " (정적변수)" << endl;
    }

};

int MyObj::k = 10; // class 안에 static변수 초기화는 전역으로 해야 한다

int main(void){

    MyObj o1(10, 3.14);
    MyObj* o2 = new MyObj(20, 6.28);

    o1.showMyContents();  // 10, 3.14, 10

    o2->k = 777;  
    // o2 객체로 정적변수 k의 값을 바꿨더니, o1객체에서의 정적변수 k의 값도 바뀌었다
    o1.showMyContents();  // 10, 3.14, 777
    o2->showMyContents(); // 20, 6.28, 777

    return 0;
}