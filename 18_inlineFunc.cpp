#include <iostream>
#include <string>

using namespace std;

/*
    함수가 호출되어 함수가 있는 주소로 갈 때 argument를 갖고 간다.
    return값을 저장해놓은 주소를 가져와서 그 주소에서 값을 찾아온다.
    --> overhead가 많다. 성능저하(재귀함수가 성능이 매우 안좋은 이유)

    inline function : 메모리상 함수가 있는 주소를 복사하여 그곳에 가지 않고 copy하여 현재 주소에 붙여놓는다.
                      장점 : 속도가 매우 빨라짐. 
                      단점 : 코드 길이가 길어짐.
        
        inline 안붙이면, 그냥 함수
        inline 붙이면, inline 함수

*/

inline int my_func(int a, int b){

    return a + b;
}

int main() {

    my_func(10,20);

    return 0;
}