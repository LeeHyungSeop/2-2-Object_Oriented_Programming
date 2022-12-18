#include <iostream>

using namespace std;

/*
    함수가 객체 반환하기

    함수가 return할 때, 객체를 반환할 떄..
    
*/

class Pizza {

public :
    Pizza(int r=0):radius(r) {
        cout << "Pizza constructor was invoked"<< endl;
    }
    Pizza(const Pizza& p) { // 이 복사생성자를 직접 만들지 않아도 자동적으로 생긴다
        cout << "이게 바로 복사 생성자입니다." << endl;
    }
    ~Pizza() {
        cout << "Destructor was invoked" << endl;
    }

    void setRadius(int r) {
        this->radius = r;   // this는 자기 자신의 class를 가리키는 pointer(member variable에 대해서 처리하겠다는 것을 확실히 명시하기 위해서)
    }
    void showRadius() {
        cout<< "pizza radius : " << this->radius << endl;
    }

private :
    int radius;

};

Pizza createPizza(int r) {
    Pizza p(r);

    // 함수가 객체를 넘길 때는 복사본을 만들어서 넘겨준다
    // 즉, p의 복사본을 만들어서 넘겨주는데,
    // 복사본은 '생성자'를 안 부르고 만들어지는 것인가?
    // 복사할 때 쓰는 생성자인 복사생성자를 사용한다.

    return p;
}

void doubleSize(Pizza p) {
    p.setRadius(20);
}

void doubleSize(Pizza* p){
    p->setRadius(20);
}

void doubleSize_ref(Pizza& p) {
    p.setRadius(30);
}

int main(void){

    // 복사 생성자 쓰이는 경우

    // 1. 함수의 인수로 넘겨줄 때,
    // Pizza p2(10);
    // doubleSize(p2);

    // 2. 함수가 객체를 반환할 때, (Mac 차이인지 모르겠는데 copy constructor 호출하지 않음)
    // Pizza p1=createPizza(10);   

    // Pizza p1;                       // constructor invoked
    // p1 = createPizza(10);           // constructor invoked

    // 3. 다른 객체를 복사해서 내 객체를 만들 때
    // Pizza p1(20);
    // Pizza p2(p1);


    return 0;
}