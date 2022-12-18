#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
    Algorithm 
        : find
        : count_if , 조건을 만족하는 것의 개수
        : copy , 복사하기
        : reverse , 순서 뒤집기
        : sort , 정렬하기, default는 asc
        : for_each : 각 요소에 함수 적용

    STL : container, iterator, algorithm
*/

void my_func(string s) {
    cout << "문자열은 : "+s << endl;
}

int main(void) {

    vector<string> myf = {"사과", "바나나", "토마토", "배"}; // 맥북에서는 한글 한 글자를 3byte로 취급한다. 
    
    for_each(myf.begin(), myf.end(), my_func);

    return 0;
}