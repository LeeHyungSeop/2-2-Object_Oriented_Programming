#include <iostream>
#include <array> // STL array를 사용하기 위해
#include <algorithm>

/*
    STL Array는 그냥 Array와 똑같은데 왜 사용?

        class이기 때문에 많은 method를 제공하기 때문

        size()   size
        fill()   값 채우기
        empty()  array에 값이 있느닞
        at()     출력
        front()  맨 앞에 있는 애
        back()   맨 뒤에 있는 애
        ..

*/

using namespace std;

// bool compare(int _a, int _b) {
//     return _a > _b;
// }

int main(void){

    array<int, 3> my_array; 
    my_array[0] = 10;
    my_array[1] = 5;
    my_array[2] = 0;

    for(auto& v : my_array) {
        cout << v << endl;
    }

    sort(my_array.begin() , my_array.end());
    for(auto& v : my_array) {
        cout << v << endl;
    }


    return 0;
}