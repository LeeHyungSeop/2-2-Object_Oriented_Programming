#include <iostream>
#include <vector>
#include <list>

using namespace std;

/*
    #include <list>

    list는 vector와 똑같이 생겼다.

    차이점은
    vector : array, contiguous memory
    list   : doubly linked list

    vector : add는 일정, insertion과 deletion은 상황에 따라 다름 ()
    list   : insertion과 deletion 수행 시간 거의 일정

    vector : small memory (data만 갖고 있으면 됨)
    list   : large memory (DLL이니까 data뿐만 아니라 pointer를 갖고 있어야 함)

    vector : default size (100개의 사이즈로 정해져 있으면 101개를 받을 때 100개를 더 추가하여 200개의 사이즈로 늘어남)
    list   : no default size (DLL이니까 data가 들어올 때마다 늘어남)

    vector : v.at(i) --> array니까 index가 정해져있어서 이렇게 사용 가능
    list   : random access is not possible . at(i) . --> linked list니까 index번호가 바뀌어서 이렇게 사용할 수 없다
*/

int main(void){

    vector<int> v = {3,2,1,5,4,3,3,3};
    list<int> l= {3,2,1,5,4,3,3,3};

    cout << "[vector] : \n";
    for (auto& e : v) {
        cout << e << endl;
    }
    

    cout << "[list] : \n";
    for (auto& e : l) {
        cout << e << endl;
    }


    return 0;
}