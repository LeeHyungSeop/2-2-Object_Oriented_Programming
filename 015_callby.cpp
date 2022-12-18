#include <iostream>

using namespace std;

int x = 10;
int y = 20;
int w = 30;

void my_swap(int* a,int* b){
    int temp= *a;
    *a = *b;
    *b = temp;

    // 실수로 아래의 코드를 작성했다면?
    *(b+1) = 666;
        /*
            w의 주소를 건들이게 돼서 w의 값이 666으로 바뀌게 된다.
            위와 같은 위험한 작업을 막기 위해

            --> reference variable : &
        */

}

void my_swap2(int& a,int& b){
    int temp= a;
    a = b;
    b = temp;

    // b+1 = 555;
        // 주소에 관련하여 연산을 하려고 하면 에러가 난다.

}

int main(void){

    cout << x << " " << y << " " << w << endl;
    my_swap(&x,&y);
    cout << x << " " << y << " " << w << endl;
    my_swap2(x,y);
    cout << x << " " << y << " " << w << endl;
 
    return 0;
}