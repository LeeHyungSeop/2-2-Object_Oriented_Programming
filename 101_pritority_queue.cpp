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

template <typename T>
class MyCompare {

public :
    bool operator() (T a, T b) {
        if(a < b) {    // max heap (descending)
            return true;
        }
        return false;
        
        // if(a < b) { // min heap (ascending)
        //     return true;
        // }
        // return false;
    }

};

int main(void){

    priority_queue<int, vector<int>, MyCompare<int>> pq;
    // MyCompare class로 우선순위를 선택해준다

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