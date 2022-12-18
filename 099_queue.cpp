#include <iostream>
#include <set>
#include <map>
#include <stack> // dapater임. container가 아님
#include <queue> // priority queue가 queue안에 있음
#include <list>

using namespace std;

/*
    container adapter
*/

int main(void){

    // queue<int, deque<int>> my_q;
    queue<int> my_q;

    my_q.push(10);
    my_q.push(20);
    my_q.push(30);

    cout << "queue size : " << my_q.size() << endl; // 현재 queue에 들어가 있는 데이터 개수
    cout << my_q.front() << endl; // front 있는 값
    cout << my_q.back() << endl; // back 있는 값
    
    cout << "----------------------------------\n";
    // queue에 있는 값들 모두 pop하며 출력
    while(my_q.empty() == false) {
        cout << my_q.front() << endl;
        cout << "back : " << my_q.back() << endl;
        my_q.pop();
    }

    return 0;
}