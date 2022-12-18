#include <iostream>
#include <string>

using namespace std;

class Circle {

public : 

    // member variable (public --> class 외부에서도 값을 R/W할 수 있다 / private --> )
    int radius;
    string color;

    // method
    void showAttribute () {
        cout << "radius : " << radius << " / color : " << color << endl;
    }

private :
    int radius2;
    string color2;
};

class BankAccount {
private :
    int money;  // public이라면 외부에서 값을 함부로 수정할 수 있다.

public : 
    void setMoney(int m) {
        if(m < 0){
            money = 0;
            return;
        }
        money = m;
    }
    void showMoney () {
        cout << "you have " << money << " won." << endl;
    }

};

int main(void){

    Circle c;
    c.radius = 10;
    c.color = "yellow";
    cout << "c.radius : " << c.radius << " / c.color : " << c.color << endl;
    c.showAttribute();


    BankAccount a;
    BankAccount b;

    a.setMoney(-100);
    b.setMoney(100);

    a.showMoney();
    b.showMoney();

    
    

    return 0;
}