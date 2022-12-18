#include <iostream>
#include <string> // string str;

using namespace std;

int main(void){

    string str; 
    
    do {
        cin >> str; // c : scanf
        cout << "입력받은 문자열 : " + str << endl;
    } while(str != "end");
    /*
        i am happy
        입력받은 문자열 : i
        입력받은 문자열 : am
        입력받은 문자열 : happy

        cin의 한계 --> 공백을 \n으로 인식

        getline 으로 해결 
    */

    do {
        getline(cin,str); // c : getstring
        cout << "입력받은 문자열 : " + str << endl;
    } while(str != "end");
    

    return 0;
}