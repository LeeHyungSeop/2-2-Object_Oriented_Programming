#include <iostream>
#include <fstream>

using namespace std;

/*
    파일 입출력

        stream : 외부에 있는 데이터를 읽고 쓰는 통로
            input stream
            output stream

        파일의 2가지 종류
            text file   : 모든 것을 ascii code값으로 저장 : a -> 97
            bianry file : 값 그대로 저장                : a -> a
*/

int main(void){

    // #include <fstream>

    // ofstream 이라는 class가 있다. 지정한 file로 write하는 stream
    ofstream os("80_output_file_test.txt");

    for (int i = 0; i < 100; i++) {
        os << i << " "; 
    }

    // close를 안해도 된다. ofstream은 class이고 destructor가 있기 때문에
    

    return 0;
}