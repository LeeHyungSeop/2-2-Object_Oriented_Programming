#include <iostream>

using namespace std;

int main(void){

    // 제어구조

    /*  관계 연산자. relational operator
            == , != , >, < , >=, <=
    */

    bool b;
    b = (1==2);

    cout << boolalpha;  // bool형을 alphabet으로 찍는다.
    cout << "(boolalpha)  b : " << b << endl;

    cout << noboolalpha; // bool형을 alphabet으로 찍지 않는다.
    cout << "(noboolalpha)b : " << b << endl;

    /*  논리 연산자. logical operator
        &, |, !
    */


    // // if, switch, while C언어 문법과 동일하다
    // int c = 2;

    // switch (c) {
    //     case 1 :
    //         cout << "hello" << endl;
    //         break;
    //     case 2 :
    //         cout << "world" << endl;
    //         break;
    //     default :
    //         cout << "others" << endl;
    //         break;
    // }

    // while (true){   // 처음에 조건에 안맞으면 한 번도 실행 X
    //     cout << "infinite loop" << endl;
    // }

    // do {    // 처음에 조건에 안맞아도 한 번은 실행 O
    //     cout << "infinite loop" << endl;
    // } while(true);


    return 0;
}