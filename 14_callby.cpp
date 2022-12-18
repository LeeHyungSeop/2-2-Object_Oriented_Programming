#include <iostream>
#include <string>

using namespace std;
    /*

        call by value (작은 데이터를 처리할 때 사용)
            장점 : 원본이 안전
            단점 : 복사에 시간이 많이 듦, 메모리 추가 사용

        call by reference (대용량 데이터를 처리할 때 사용 --> array)
            장점 : 복사가 없이 주소만 넘기니까 빠르다

    */

int my_func_value(int a,int b){
    a = 100;
    b = 200;
    return a + b;
}

int my_func_reference(int* a,int* b){
    *a = 100;
    *b = 200;
    return *a + *b;
}

int main(){
    
    int x = 10;
    int y = 20;

    int v = my_func_value(x,y);
    cout << "x : " << x << " / y : " << y << endl;

    int v2 = my_func_reference(&x,&y);
    cout << "x : " << x << " / y : " << y << endl;

    return 0;
}