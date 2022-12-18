#include <iostream>
#include <string>

using namespace std;

    /*
        default parameter
    */

           // parameter
int my_func(int a, float b = 3.14, int c = 5){
    return 0;
}


int my_func2(int a , int b =3){
    return 0;
}

// int my_func2(int a = 3 , int b){
//     return 0;
// }

int main() {
    
           // argument
    my_func(1,6);       // 1, 6, 5
    my_func(10, 4.14);  // 10, 4.14, 5
    my_func(10);        // 10, 3.14, 5

    my_func2(10); // 10, 3

    return 0;
}