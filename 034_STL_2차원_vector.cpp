#include <iostream>
#include <vector>

using namespace std;

int main(void){

    // 2차원 벡터 (장점 : 각각의 벡터의 크기를 다르게 할 수 있다)
    vector<vector<int>> a;

    // 초기화
    for (int i = 0 ; i<4; i++) {

        vector<int> row;

        for (int j = 0; j < 5; j++)
        {
            row.push_back(i*j);
        }
        a.push_back(row);
    }
        /*
            0*0 0*1 0*2 0*3 0*4
            1*0 1*1         1*4
            2*0 2*1         2*4
            ...             ...
            4*0 ...         4*4
        */

    for(auto& i : a){
        for(auto& j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << "================="<< endl;
    
    a[1].push_back(999);
    a[3].push_back(999);

     for(auto& i : a){
        for(auto& j : i) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}