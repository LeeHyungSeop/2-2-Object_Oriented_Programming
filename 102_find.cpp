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

int main(void) {

    vector<string> myf = {"토마토", "바나나", "토마토", "배"};

    // algorithm -> find() 사용, 토마토가 있는지 확인  (  [A, B) : A서부터 B전까지   )
    auto it = find(myf.begin(), myf.end(), "토마토");
    // auto it = find(myf.begin(), myf.end(), "토마마토토");

    if(it == myf.end()) {
        cout << "찾을 수가 없습니다\n";
    }
    else {
        cout << "찾았습니다. " << *it << endl;
    }



    return 0;
}