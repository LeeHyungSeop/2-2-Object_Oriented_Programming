#include <iostream>

using namespace std;

/*
    Singleton Design Pattern

        - GOF (Gang Of Four)
            4명의 강도. 
            4명의 사람들이 객체지향 언어를 개발할 때 필요한 설계공식(패턴)을 모아놓은 책을 만듦.
            여러 패턴들 중에 Singleton Pattern이 있다

        - 싱글톤의 문제 상황 : 특정 클래스에서 오직 1개의 객체만 만들어지도록 할 수 있을까? 
*/
/*
    클래스로부터 오직 1개의 객체만 만들어지도록 하는
    싱글톤 패턴이 적용된 클래스
*/

class MyOnlyObj {

private :
    int d;
    static MyOnlyObj* instance;
    MyOnlyObj() { // 외부에서 함부로 객체를 생성하지 못하도록 private에 생성자를 만듦.
        d=20;
    }

public :

    static MyOnlyObj* getInstance() {
        if(instance == nullptr){ 
            instance = new MyOnlyObj();
        }
        return instance;
    }
    
    void showD() {
        cout << "Data : " << d << endl;
    }
    void setD(int k) {
        d = k;
    }

};

MyOnlyObj* MyOnlyObj::instance = nullptr; // static 변수는 초기화를 해줘야 하는데 밖에서 해야 하기 때문에 여기서 함

/*
    외부에서 사용가능한 method는 오직 getInstance()
*/

int main(void){

    MyOnlyObj* p1 = MyOnlyObj::getInstance();
    MyOnlyObj* p2 = MyOnlyObj::getInstance();
    MyOnlyObj* p3 = MyOnlyObj::getInstance();
        // p1, p2, p3는 같은 주소를 갖고 있다

    p1->showD();
    p2->setD(200);

    p1->showD(); 
    p2->showD(); 
    p3->showD(); 

    return 0;
}