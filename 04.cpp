#include <iostream>

using namespace std;

int main(void){
    
    // auto : 변수에 할당된 값에 따라서 type이 결정된다.
    // 그런데 프로그램이 위험하기 때문에 가능하면 안쓰는 것이 좋다. 
    
    int a= 1; 
    auto b = 2;
    auto c = 3.14;

    cout << "sizeof(a) : " << sizeof(a) <<endl;
    cout << "sizeof(b) : " << sizeof(b) <<endl;
    cout << "sizeof(c) : " << sizeof(c) <<endl;

    return 0;
}