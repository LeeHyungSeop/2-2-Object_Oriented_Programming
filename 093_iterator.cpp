#include <iostream>
#include <list>

using namespace std;

/*
    Iterator : generalized pointer

    begin() : 시작 주소
    end()  : 마지막 주소의 그 다음 주소
    ++     : 다음
    --     : 이전
    *      : 해당 위치의 값
    rbegin() : reverse begin == 맨 마지막에 있는 값
    rend() : reverse end == 

*/

int main(void) {

    list<int> l = {3,1,2,5,4,3,3,3};

    for (auto i = l.begin() ; i != l.end() ; i++){ // iterator(포인터)를 사용하여 해당 값을 출력
        cout << *i << endl;
    }
    cout << "\n";

    for(auto& i : l) { // 값을 직접 출력
        cout << i << endl;
    }
    cout << "\n";

    l.sort(); // list 크기에 따라 사용하는 sort기법이 다르다. 크면 quickSort
    for (auto i = l.begin() ; i != l.end() ; i++){ // iterator(포인터)를 사용하여 해당 값을 출력
        cout << *i << endl; 
    }

    return 0;
}