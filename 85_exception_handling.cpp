#include <iostream>

using namespace std;

/*
    exception handling
    error handling

    문제가 생길 수 있는 부분을 try로 감싼다.
    try 안에서 error(=exception)이 발생하면 그 상황을 알리기 위해서 
    throw -> program이 중단되어 -> catch로 간다

*/

int main(void) {

    int a = 0, b = 10;

    try {                       
        int person = 0;
        if(person == 0) {
            throw person;
        }
        else {
            throw 'c';
        }
    } // multiple exception handling
    catch (int e) {
        cout << "e : " << e << endl;
        cout << "Exception catched!!" << endl;
    }
    catch (char c) {
        cout << "c : " << c << endl;
        cout << "Character exception catched!!" << endl;
    }


    return 0;
}