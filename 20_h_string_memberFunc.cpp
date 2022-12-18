#include <iostream>

using namespace std;

/*

    string member function

*/

int main(void){

    string s0 = "";
    string s1 = "hello";
    string s2 = "world";

    cout << boolalpha;
    cout << "s0.empty() ? : " << s0.empty() << endl; // 문자열이 비어있는지 확인해주는 함수
    cout << "s1.empty() ? : " << s1.empty() << endl;

    cout << s1.insert(2,s2) << endl; // s1 2번째 index부터 s2를 insert하라
    cout << s1.find("llo") << endl;  // s1에서 "llo" 를 찾아라 --> 7번째 index부터 있다
    

    return 0;
}