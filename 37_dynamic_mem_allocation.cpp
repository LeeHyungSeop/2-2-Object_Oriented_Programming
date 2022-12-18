#include <iostream>
#include <string>

/*
    동적 메모리 할당 : dynamic memory allocation
    정적 메모리 할당 : static memory allocation

    DMA : malloc / free, heap이라는 공유 메모리에서 가져온다. 따라서 free를 하지 않으면 heap 메모리가 부족해진다
    SMA : array allocation -> int a[10];
    
    C++ DMA : new --> malloc, delete --> free
*/

using namespace std;

int main(void){

    // C언어에서
    // int* a = (int*)malloc(sizeof(int));
    // free(a);
    // int* b = (int*)malloc(sizeof(int)*10);
    // free(b);

    // C++에서
    int* a = new int;
    delete(a);
    int* b = new int[10];
    delete[] b;
    
    string* s = new string[10];
    s[0]= "hello";
    s[1]= "world";
    delete[] s;


    return 0;
}