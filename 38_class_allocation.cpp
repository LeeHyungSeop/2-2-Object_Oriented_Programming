#include <iostream>
#include <string>

/*

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

    // 객체의 정적생성
    Person p;
    p.age = 10;


    // 객체의 동적생성
    /*
        new가 생겨난 이유 : class로부터 객체를 생성(메모리 할당받고, 생성자호출)하기 위해서
        malloc으로 new가 하는 일을 못하는 이유 :
                        -- malloc으로 객체를 위한 메모리는 할당받을 수 있지만,
                        -- malloc은 생성자 호출을 못함.
        new : malloc + 생성자 호출 

        delete : free + 소멸자 호출
    */
    Person* pp = nullptr;

    pp = new Person; 
    pp = new Person(21);
    cout << pp->age << endl;
    pp->age = 22;
    cout << pp->age << endl;

    delete pp;

    return 0;
}