#include <iostream>
#include <string>

using namespace std;

class Person{

public:
    int age;

    Person() : age(10) {};
    Person(int _age):age(_age) {};


    /*
        클래스 안에서 멤버 함수를 만들 때,
        함수 뒤에 const를 붙이면,
        이 함수 안에서는 멤버 변수들을 절대로 변경시키지 않는다. 라는 뜻.
        어기면 compile ERROR
    */
    int showAge(int x) const {
        age = age*100;
        return age;
    }

};

int main(void){

    const Person* pp = new Person(20);
    Person* const pp = new Person(20);
    const Person* const pp = new Person();

    return 0;
}