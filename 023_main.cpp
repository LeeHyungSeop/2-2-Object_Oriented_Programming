#include "./23_Circle.h"

using namespace std;

int main(void){
    
    Circle c;

    c.showMe(4,51);

    return 0;
    
} 

/*
    개발자의 알고리즘(지적재산권)을 보호하기 위해서 
    실제 구현하는 파일을 수업13_Circle.cpp로 분리.

    그것을 compile한 것을 binary파일로 제공 --> 라이브러리 (ex. #include <stdio.h> )

*/

// g++ 수업13_main.cpp 수업13_Circle.cpp -o main ;  ./main;   