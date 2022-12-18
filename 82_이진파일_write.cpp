#include <iostream>
#include <fstream>

using namespace std;

/*
    binary <-----> text file == ascii file
*/

int main(void){

    /*
        binary file 생성
            stream - input stream, output stream
            c++ class : ofstream
    */

    // 파일에 기록할 데이터, 20bytes    
    int buffer[] = {10, 20, 30, 40, 50};  
    char buffer2[] = {'1', '2', '3', '4', '5'};

    // 기록할 파일 객체를 생성한다 
    // c : fopen, fclose
    // 객체 생성 == open
    //     소멸 == close 

    ofstream os("82_binary.dat", ofstream::binary); // binary mode로 open하겠다.

    cout << "sizeof buffer : " << sizeof(buffer);
    os.write((char *)buffer, 20);    // write method 사용법 
                                     // write(const char_type* __s, streamsize __n)
    os.write((char*)buffer2, 5);

    return 0;
}