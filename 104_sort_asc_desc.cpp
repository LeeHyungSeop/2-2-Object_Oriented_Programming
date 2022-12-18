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

bool my_str_sort(string s1, string s2) { // 내림차순을 위해
    if(s1 > s2) {
        return true;
    }
    return false;
}

int main(void) {

    vector<string> myf = {"사과", "바나나", "토마토", "배"}; // 맥북에서는 한글 한 글자를 3byte로 취급한다. 

    // sort(myf.begin(), myf.end());   // default, 오름차순
    sort(myf.begin(), myf.end(), my_str_sort); // 
        // class끼리 대소비교를 해줘야할 때 이렇게 기준을 정해줘야 한다.
    
    for(auto& i : myf) {
        cout << i << endl;
    }

    return 0;
}