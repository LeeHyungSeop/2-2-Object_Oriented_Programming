#include <iostream>

using namespace std;

/*
    polymorphism
    dynamic binding

*/


class Animal {

public :
    virtual void speak() {
        cout << "Animal" << endl;
    }
    virtual ~Animal() {
        cout <<" Animal destructor\n";
    }

};

class Dog : public Animal{

public :
    void speak() {
        cout << "Dog" << endl;
    }
    ~Dog() {
        cout <<" Dog destructor\n";
    }
};
class Cat : public Animal{

public :
    void speak() {
        cout << "Cat" << endl;
    }
    ~Cat() {
        cout <<" Cat destructor\n";
    }
};

int main(void) {

    Animal* a = new Animal();
    a->speak(); // Animal

    Dog* d =  new Dog();
    d->speak(); // Dog

    cout << "--------\n";

    Animal* a2 = new Dog();
    a2->speak();
    Animal* a3 = new Cat();
    a3->speak();


    return 0;
}