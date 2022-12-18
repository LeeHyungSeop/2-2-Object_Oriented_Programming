#include <iostream>

using namespace std;

int main(void){

    int a[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };


    // 2차원 배열 출려을 위해 : range-based for loop
    for(auto& v : a){
        for(auto c : v){
            cout << c << " ";
        }
    }
    cout << endl;
    // 이건 에러
    // for(auto v : a){
    //     for(auto c : v){
    //         cout << c << " ";
    //     }
    // }
        /*
            int* a;
                -->

            int& a;
                --> pointer와 똑같은데 point 연산은 안되고 그 주소만 
        */

    ///////////////////////////////////////////////////////////////////////////

    string names[] = {"james","john","tom"};

    for(auto& v : names){
        for(auto& c : v){
            cout << c << " ";
        }
        cout << " / ";
    }
    cout << endl;

}
