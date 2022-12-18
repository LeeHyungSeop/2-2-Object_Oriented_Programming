#include <iostream>
#include <set>
#include <map>
#include <stack> // adapater임. container가 아님
#include <queue> // priority queue가 queue안에 있음
#include <list>

using namespace std;

/*
    container adapter
*/

int main(void){

    priority_queue<int> pq;

    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(15);
    pq.push(5);
    
    
    while(pq.empty() == false) {
        cout << pq.top() << endl;
        pq.pop();
    }

    return 0;
}