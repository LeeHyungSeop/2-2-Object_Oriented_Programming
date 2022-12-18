#include <iostream> // input, output이 물길(stream)을 따라 흐른다 라는 의미

/*
    #include <string.h>
        C 전용에는 .h를 붙인다
    #include <string>
        C++ 전용에는 .h를 붙이지 않는다
*/

int main(){

    // std::cout << "hello world" << std::endl;
    
    using namespace std;
    cout << "hello world" << endl;
    
    /*

        std :: -> std에 있는 namespace
            C++에 namespace가 있는 이유 : 
                C와 달리 생산성이 높은 C++은 오픈소스를 가져올 때 
                cout이 서로 충돌할 수 있기 때문에
                소속을 구분시켜준다.
                
        cout -> console out
        <<   -> stream, "hello wolrd" 가 cout으로 흘러감
        endl -> 줄바꿈 (end of line)

    */

    return 0;
}