#include <iostream>

using namespace std;

int main(void){

    // range based for loop

    int num[] = {1,2,3,4,5};
    for (int i : num) {
        cout << i << endl;
    } cout << "----\n";
    

    for (auto i : num) {
        cout << i << endl;
    } cout << "----\n";

    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << endl;
    } cout << "----\n";

    // 위 3개의 for loop은 모두 같음 ///////////////////////////
    
    string names[] = {"tom", "jane", "jerry"};
    for (auto i : names){
        cout << i << endl;
    }

    /////////////////////////////////////////////////////

    for (int i : num){  // 실제 num 배열의 값들은 바뀌지 않는다.
        i = 2*i;
        cout << i << endl;
    }

    // pointer type int* i;
    // reference type int& i;
    for (int& i : num){ // 실제 num 배열의 값들이 바뀐다
        i = 2*i;
        cout << i << endl;
    }
    /*
        pointer와 똑같지만, pointer가 갖고 있는 위험성 문제 해결 (다른 주소로도 갈 수 있는)
        그곳밖에 못 건든다.

        int j = 100;
        int& r = j;

        r = 200;
        cout << j << endl;
    */
    int j = 100;
    int& r = j;

    r = 200;
    cout << j << endl;


    return 0;
}