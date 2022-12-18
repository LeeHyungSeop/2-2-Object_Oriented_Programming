#include <iostream>

using namespace std;

int main(void){

    // 배열
    int a[5] = {1,2,3,4,5};
    int b[] = {1,2,3,4,5};
    int c[] {1,2,3,4,5}; // 배열도 객체이기 때문에 이와 같은 선언 가능

    int d[10] = {1,2,}; // 나머지는 모두 0

    string names[3] ={"tom","jane","james"};
    for (auto i = 0; i < 3; i++)
    {
        cout << names[i] << endl;
    }

    return 0;
}