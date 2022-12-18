#include <iostream>

using namespace std;

/*
    pointer operator overloading
*/

class MyValue {

    int x;

public :
    MyValue(int _x) : x(_x) {

    }
    void showMyValue() {
        cout << "My Value is : "<< this->x << endl;
    }
    
    
    int operator[](int k){   // [k] 로 받아들여진다 (c++ 문법)
        if(k<50){
            return -999;
        }
        else{
            return 999;
        }
    }

};

int main(void){

    /*  memory leak
        
        while (true) {

            int* p = new int(40);
            delete p; // <- 안써주면 메모리 누수 <- 실수를 해결하기 위해 unique_pt
        }

    */
   
    while (true) {
        unique_ptr<int> p(new int(40)); // 할당받은 메모리를 unique_ptr가 알아서 해제시켜줌
    }

    return 0;
}