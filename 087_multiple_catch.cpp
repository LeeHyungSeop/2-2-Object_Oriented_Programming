#include <iostream>
#include <vector>

using namespace std;


/*
    exception Class를 상속받은 child class들이 많다.
    exceptiondml 종류가 세분화 되어있다.
    해당 함수의 API를 보고 어떠한 exception을 발생시키는지 참고하여 exception을 catch해줘야 한다.

    1. out_of_range
        vector::at() : API-> https://cplusplus.com/reference/vector/vector/at/
    2. length_error
    3. ...

*/

int main(void){

    vector <int> v = {1, 2, 3, 4, 5};

    cout << v.at(0) << endl;    
        // cout << v.at(10) << endl; // 10번째 index가 없으니까 프로그램 죽음
        // error == exception 처리를 할 수 있음 -> try{} catch{}

    try {   // try, catch가 있으니까 죽지 않고 오류처리 후 프로그램 정상 진행
        cout << v.at(10) << endl; // 10번째 index가 없으니까 프로그램이 죽어야 되는데 -> out_of_range
        // v.resize(v.max_size() + 1);  // max_size() : vector가 사용할 수 있는 최대 size를 반환. 그런데 그곳에서 +1크기만큼 resize -> length_error

    }
    catch (out_of_range& e) {
        cout << "[out_of__range] me : " << e.what() << endl;
    }
    catch (length_error& e) {
        cout << "[length_error] me : " << e.what() << endl;
    }
    catch (exception& e) {
        cout << "exception 내용 출력 : " << e.what() << endl; // .what() : 어떠한 exception인지 문자열을 반환
    }


    cout << "Program Ended\n";

    return 0;
}