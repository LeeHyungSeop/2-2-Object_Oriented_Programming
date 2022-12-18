#include <iostream>
#include <string>

using namespace std;

int fun1(int); // function prototype

int main() {

    int k = fun1(10);
    cout << k << endl;

    return 0;
}

int fun1(int a){
    return a;
}