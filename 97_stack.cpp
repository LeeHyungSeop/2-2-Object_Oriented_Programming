#include <iostream>
#include <set>
#include <map>
#include <stack> 

using namespace std;

int main(void){

    stack<int> my_stack;

    my_stack.push(10);
    my_stack.push(20);
    my_stack.push(30);

    cout << "stack size : " << my_stack.size() << endl; // 현재 stack에 들어가 있는 데이터 개수
    cout << my_stack.top() << endl; // top에 있는 값

    my_stack.pop();
    cout << my_stack.top() << endl; // pop을 하지는 않음

    cout << "----------------------------------\n";
    // stack에 있는 값들 모두 pop하며 출력
    while(my_stack.empty() == false) {
        cout << my_stack.top() << endl;
        my_stack.pop();
    }

    return 0;
}