#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(void){
    
    string names[]  {"lee", "kim", "park", "kim soo young", "lee huy", "kim su heyodn"};
    
    /*
        kim이 들어있는 이름만 .을 붙임
    */

    for (auto& s : names) {
        if(s.find("kim") != string::npos) { // kim이 없으면 npos 반환
            s += ".";
        }
    }
    
    for (auto i : names)
    {
        cout << i << endl;
    }
    
    
    
 
    return 0;
}