#include <iostream>

using namespace std;

class Lemon {

public :
    int x, y;
    static int count;

private :

};

int Lemon::count = 30;

int main(void){

    Lemon l1;
    l1.x = 20;

    Lemon l2;
    l2.x = 40;

    cout << Lemon::count << endl;
    
    // count는 공유해서 사용한다. static variable.
    l1.count = 40;
    cout << Lemon::count << endl;
    l2.count = 50;
    cout << Lemon::count << endl;

    // static은 only one copy만 만들어짐
    cout << l1.count << endl;
    cout << l2.count << endl;


    return 0;
}