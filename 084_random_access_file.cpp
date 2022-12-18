#include <iostream>
#include <fstream>

using namespace std;


/*
    순차 접근 파일 : 앞에서부터 파일을 모두 읽어야, 원하는 위치 도달

    임의 접근 파일 : 내가 읽으려는 위치까지 이동. 파일 포인터
    (random access file)

    ios::beg : beginning, 처음 위치부터
    ios::cur : current, 현재 위치부터
    ios::end : end, 끝에서부터 

    seekg : get파일에 read pointer를 4 bytes 움직이고 get한다. 
    seekp : seek put -> 파일에 write pointer 
*/

int main(void){

    ifstream is("binary.dat", ifstream::binary);

    int v;
    is.seekg(4, ios::beg);               
    is.read((char*)&v, 4); // 20을 읽음. 30에 위치하는 중
    cout << "value is : " << v << endl;

    is.seekg(4, ios::cur); // 30에 위치하는 중
    is.read((char*)&v, 4); // 30을 읽음. 40에 위치하는 중
    cout << "value is : " << v << endl;

    is.seekg(-4, ios::end); // 끝에서 -4
    is.read((char*)&v, 4);  // 40
    cout << "value is : " << v << endl;

    return 0;
}