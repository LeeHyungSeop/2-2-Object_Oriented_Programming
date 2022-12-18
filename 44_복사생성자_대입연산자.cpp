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

    Pizza p1(10);   // p1은 일반 생성자로 만들어짐
    Pizza p2(20);   // p2은 일반 생성자로 만들어짐
    p2 = p1;        // 일반 생성자로 만들어진 애들끼리 대입연산자

    Pizza p3 = p1;  // p3는 복사 생성자로 만들어짐
    Pizza p4(p1);   // p4는 복사 생성자로 만들어짐
    
    return 0;
}