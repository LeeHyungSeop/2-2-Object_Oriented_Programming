#include <iostream>
#include <cstdlib> // random 함수 

using namespace std;

int main(void){

    // for loop
    for (int i = 0; i < 10; i++)
    {
     // cout << "hello world" << endl;
        cout << "hello world\n";
    }
    cout << "==================\n";

    // strictly typed language   : c, c++ ,java
    // implicitly typed language : python
    for (auto i = 0; i < 10; i++)
    {
        cout << "hello world\n";
    }

    // ======================================================

    /*
    
        주사위 2개를 10,000번 던져서 1,1이 나올 확률을시뮬레이션을 통해서 계산하시오. 
        1/36 = 0.027 --> 2.7% 에 근접하게 나올것임.

        https://cplusplus.com/reference/

        --> rand() 함수 관련 API 찾아봐라   
            https://cplusplus.com/reference/cstdlib/rand/?kw=rand

        --> srand()
            https://cplusplus.com/reference/cstdlib/srand/?kw=srand


        srand() ? https://blockdmask.tistory.com/308

        rand() 함수에서 값을 뽑아내기 전에 s : seed 설정.(몇 번째 숫자부터 시작할 것인지?)
        srand(3000) : 3000 ~ RAND_MAX(2147483647) 중 뽑힌 숫자를 rand()함수가 의존한다.
        그런데, 뽑히는 숫자가 정해져 있어서 진짜 랜덤이 아니라
        time.h를 써서 진짜랜덤 만듦

            srand(time(NULL));
            int programNum = rand()%100 + 1; // 1 ~ 100
    */

    int cnt = 0; // 1,1이 나오는 횟수
    // srand(3000); 
    srand(time(NULL));
    cout << "rand max is " << RAND_MAX << endl; 

    for (auto i = 0; i < 10000; i++)
    {
        // int ex = rand()%6;  --> 0~5
        int k1 = rand()%6 + 1; //  1~6
        int k2 = rand()%6 + 1;
        if(k1==1 and k2==1) {
            cnt++;
        }
    }

    cout << "10,000번 중에 " << cnt << endl;

    return 0;
}