#include <iostream>
#include <fstream>

using namespace std;

/*
    binary <-----> text file == ascii file
*/

int main(void){

    int buffer[5];

    ifstream is("binary.dat", ifstream::binary);
    is.read((char*)buffer, 20);

    for(auto& v : buffer) {
        cout << v << endl;
    }

    return 0;
}