#include <iostream>
#include <set>

using namespace std;

/*
    중복 허용 X

*/

int main(void) {

    set<int> my_set; 

    // set은 데이터의 중복을 허용하지 않기 때문에 3이 하나만 들어가있다.
    my_set.insert(1);
    my_set.insert(2);
    my_set.insert(3);
    my_set.insert(3);
    my_set.insert(3);

    // iterator : container 안의 모든 내용을 출력할 수 있도록 하는 포인터
    for(auto i = my_set.begin() ; i != my_set.end() ; i++) {
        cout << *i << endl;
    }

    // range-based for
    for(auto& i : my_set) {
        cout << i << endl;
    }

    return 0;
}