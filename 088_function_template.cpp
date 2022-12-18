#include <iostream>

using namespace std;

/*
    function template : function overloading의 사용을 훨씬 쉽게해준다
*/

template <typename T> 
void showValue(T v) { // 입력받는 parameter에 따라 T는 int, double, char, string으로 바귄다
    cout << v << endl;
}

int main(void){

    showValue(10);
    showValue(10.4);
    showValue('c');
    showValue("hello world");

    return 0;
}