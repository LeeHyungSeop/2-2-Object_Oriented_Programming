#include <iostream>
#include <deque> // double ended queue : front와 rear에 값을 push, pop할 수 있는 queue

using namespace std;

int main(void) {

    deque<int> dq1 = {1,2,3,3,4,5};

    // push_back(), push_front()
    dq1.push_back(10);
    dq1.push_back(20);
    dq1.push_front(999);
    dq1.push_front(888);

    // pop_back(), pop_front()
    dq1.pop_back();
    dq1.pop_front();

    for (auto& i : dq1) {
        cout << i << endl;
    }
    

    return 0;
}