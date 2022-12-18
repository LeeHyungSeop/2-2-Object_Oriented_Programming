#include <iostream>

using namespace std;

/*
    int, char, float --> call by value
    aray             --> call by ref
    
    object, instance --> call by value (ref로 넘어갈 것 같은데 value로 넘어간다)

*/

class Pizza {

public :
    Pizza(int r=0):radius(r) {
        cout << "Pizza constructor was invoked"<< endl;
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

    Pizza p(10);
    p.showRadius();     // 10

    // // 1.
    // doubleSize(p); 
    // p.showRadius();     // 10 --> doubleSize(p)로 call by value로 넘어갔기 때문에,
                           // // 기존의 class p의 값이 변하지 않음을 알 수 있다

    // // 2.
    // doubleSize(&p);
    // p.showRadius();     // 20 --> doubleSize(&p)로 call by ref로 넘어갔기 때문에,
    //                     // 기존 class p의 radius값이 바뀌었다.
    //                     // p가 주소이기 때문에, 위험하다

    // // 3.   <-- 이 방법을 사용하는 것이 좋다
    // doubleSize_ref(p); 
    // p.showRadius();      // 30 --> doubleSize_ref(p)로 reference가 넘어갔기 때문에
    //                      // class p의 radius값을 그냥 바꾼 것이다
    //                      // 안전하다.
    

    return 0;
}