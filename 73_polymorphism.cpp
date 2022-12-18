#include <iostream>

using namespace std;

/*
    polymorphism
    dynamic binding --> virtual 사용

*/


class Animal {

public :
    virtual void speak() {
        cout << "Animal" << endl;
    }

    // void speak() {
    //     cout << "Animal" << endl;
    // }

};

class Dog : public Animal{

public :
    void speak() {
        cout << "Dog" << endl;
    }

};
class Cat : public Animal{

public :
    void speak() {
        cout << "cat" << endl;
    }

};


int main(void) {

    Animal* a = new Dog(); // upcasting
    a->speak(); // 원래같으면 부모(animal)의 speak()

    // Animal class의 speak() method 앞에 
    // virtual만 붙여준다면? 자식(Dog)의 speak()
    /*
        dynamic binding : 어느 speak()이 불릴지는 runtime에 가봐야 한다.
        == late binding 

        virtual : 혹시 상속받은 자식 중에 overriding된 것이 있으면, 나를 밟고 그것을 부르시오.
    */
   
    Dog d;
    Animal& aa = d; // upcasting
    aa.speak(); // 이렇게 해도 마찬가지로 Dog의 speak()을 부른다

    Dog d2;
    Animal* a2 = &d2; 
    a2->speak(); // upcasting

    Dog d3;
    Animal a3 = d3; 
    a3.speak(); // Animal()의 speak()을 부른다

    // --> dynamic binding의 경우, pointer type에만 성립이 된다.
    // a3와 같이 포인터 타입이 아니면 dynamic binding이 지원될 수가 없다.

    return 0;
}