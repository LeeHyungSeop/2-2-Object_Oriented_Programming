#include <iostream>

using namespace std;

/*
    function overloading의 과한 부분을 
    function template로 수정
*/


/*
int get_max(int x, int y) {
    if (x > y) {
        return x;
    }
    return y;
}

float get_max (float x, float y) {
    if(x > y) {
        return x;
    }
    return y;
}
*/

template<typename T>    // 틀만 생성. dataType은 들어오는 변수대로 변경
T get_max(T x, T y) {
    if(x > y) {
        return x;
    }
    return y;
}

int main() {

    cout << get_max(3, 4) << endl;
    cout << get_max(4.2, 1.5) << endl;

    return 0;
}