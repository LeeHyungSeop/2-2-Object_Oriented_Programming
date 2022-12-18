#include <iostream>

/*

    C++ : nullptr : null pointer를 확실히 하기 위한 예약어
    0, null : 정수 0을 의미
    nullptr : 이거야 말로 진정한 null pointer

    장점 : 가독성

        auto p = func();
        if(p == nullptr) {
        } 


*/

int main(void){

    int* p = nullptr;   //
    int a = 10;
    p = &a;

    return 0;
}