#include <iostream>

using namespace std;


int main(void){

    string s1 = "hello";
    string s2 = "world";

    string s3 = s1 + s2; // helloworld, concatenation
    s1 += s2; // helloworld

    if(s1 == s2) {
        cout << "s1 == s2" << endl;
    }
    if(s1 != s2){
        cout << "s1 != s2" << endl;
    }
    if(s1 < s2){ // 사전순 대소 비교
        cout << "s1 < s2" << endl;
    }

    return 0;
}