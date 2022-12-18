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

bool my_condition (string s) {// 크기가 6 이상인 문자 중에 첫번째꺼만 찾기 --> MAC : 사과 / WINDOW : 바나나
    if(s.length() >= 6) { 
        return true;
    }
    else {
        return false;
    }
}

int main(void) {

    vector<string> myf = {"사과", "바나나", "토마토", "배"}; // 맥북에서는 한글 한 글자를 3byte로 취급한다. 

    auto it = find_if(myf.begin(), myf.end(), my_condition);  // mycondition() 함수에 맞는 조건을 찾아라

    if(it == myf.end()) {
        cout << "찾을 수가 없습니다\n";
    }
    else {
        cout << "찾았습니다. " << *it << endl;
    }



    return 0;
}