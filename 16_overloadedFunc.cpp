#include <iostream>

using namespace std;

    /*
        중복함수 (overloaded function)

            c언어에서는 함수이름만 같아도 같은 함수로 판단했는데,

            c++ 에서는 함수이름이 같아도 argument(개수, type, 순서)만 다르면 다른 함수로 판단한다. 
                     return타입은 전혀 상관없다
            
    */

int funcA () {
    return 0;
}

int funcA (int a) {
    return a;
}

int funcA (int a, double b) {
    return 0;
}

int funcA (double a,int b) {
    return 0;
}

int my_add (int a, int b){
    return a+b;
}

float my_add(float a, float b){
    return a+b;
}

int main(void){

    

    return 0;
}