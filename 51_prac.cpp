#include <iostream>

using namespace std;

class OP_OVERLOAD {

private :

public :
    int x, y;

    OP_OVERLOAD (int _x, int _y) : x(_x), y(_y) {}
    
    void showXY() {
        cout << "(x,y): " << x << ", "<< y << endl; 
    }

    OP_OVERLOAD operator+ (OP_OVERLOAD& _other) {
        cout << "1 operator ------------ \n";
        cout << "[this-> x, y ] : " << x << ", " << y << endl; 
        cout << "[other. x, y ] : " << _other.x << ", " << _other.y << endl; 
        OP_OVERLOAD temp(this->x + _other.x, this->y + _other.y);
        return temp;
    }
    OP_OVERLOAD* operator+ (OP_OVERLOAD* _other) {
        cout << "2 operator ------------ \n";
        cout << "[this-> x, y ] : " << x << ", " << y << endl; 
        cout << "[other. x, y ] : " << _other->x << ", " << _other->y << endl; 

        OP_OVERLOAD* temp = new OP_OVERLOAD(this->x + _other->x, this->y + _other->y);
        return temp;
    }

};


int main(void){

    OP_OVERLOAD t1(1,2);
    OP_OVERLOAD t2(3,4);
    OP_OVERLOAD* t3 = new OP_OVERLOAD(5,6);

    OP_OVERLOAD t4 = t1 + t2;
    t4.showXY();

    OP_OVERLOAD* t5 = t1 + t3;
    t5->showXY();
    OP_OVERLOAD* t6 = t1 + &t2;
    t6->showXY();


    return 0;
}