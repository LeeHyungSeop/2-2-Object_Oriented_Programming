#include <iostream>
// #include <string>

int main(void){

    using namespace std;

    /*
        short - 2
        int - 4
        long - 4
        long long - 8
        char - 1
        float - 4
        double - 8
        long double - 8

        bool type

        문자열형 : string
    */

   bool b;
   b = true;

   bool c;
   c= false;

   cout << b << " " << c << endl;

   // ========================================================

    string s1 = "hello ";
    string s2 = "world";
    int a1 = 10;
    int b1 = 20;

    cout << s1+s2 << endl;

    cout << "int(a) + int(b) : "<< a1+b1 << endl;
    cout << "to_string(a) + to_string(b) : " << to_string(a1)+to_string(b1) << endl;

    /*
        cout << s1 + k + s2 << endl; 
        이렇게는 안돼서 int형 변수 k를 형변환 해줘야 한다.

        #include <string>
        to_string(k)
    */

   // ========================================================

    return 0;
}