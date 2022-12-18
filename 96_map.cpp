#include <iostream>
#include <map>

/*
    map : hash table --> (key, value)
          검색이 매우 빠른 자료구조
        
    key, value의 type을 각각 지정
*/

using namespace std;

int main(void){

    map<string, int> my_map;

    my_map["john"] = 20;
    my_map["tom"] = 19;

    cout << "john age : " << my_map["john"] << endl;
    cout << "tom age : " << my_map["tom"] << endl;

    return 0;
}