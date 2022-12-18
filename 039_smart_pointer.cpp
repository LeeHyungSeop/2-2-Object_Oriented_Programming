#include <iostream>
#include <string>

/* wrapper (smart pointer)

    new에 대한 delete를 안해도 된다
    진짜 pointer는 아니다.
*/

using namespace std;

class Person{

public :
    int age;

    Person() {  // 생성자 1
        age = 10;
    }
    Person(int _age) : age(_age) {};    // 생성자 2

};

int main(void){

    // new-delete pointer로, delete를 안 하면 문제가 생긴다.
    Person* pp = nullptr;
    pp = new Person; 
    pp = new Person(21);
    cout << pp->age << endl;
    delete pp;

    // wrapper, delete를 안 해도 문제가 안 생긴다
    unique_ptr<Person> pp1(new Person(21));
    cout << pp1->age << endl;

    return 0;
}