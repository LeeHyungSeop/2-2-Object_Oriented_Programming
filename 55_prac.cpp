#include <iostream>

using namespace std;

class PREPOST {

public :
    int x;
    PREPOST(int _x) : x(_x) {}

    void showX() {
        cout << x << endl;
    }

    PREPOST& operator++() {
        cout << "prefix operator ------------\n";
        this->x += 1;
        return *this;
    }
    PREPOST& operator++(int) {
        cout << "postfix operator ------------\n";
        this->x += 1;
        return *this;
    }

};


int main(void) {

    PREPOST p1(1);
    p1.showX();

    ++(++p1); 
    p1.showX();

    PREPOST p2(1);
    p2.showX();

    (++(p2++))++;
    p2.showX();

    return 0;
}