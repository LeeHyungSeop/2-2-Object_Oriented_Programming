#include <iostream>

using namespace std;

/*
    객체와 함수

*/

class Circle {

private :
    int x;
    int y;
    int r;
    
public :
    Circle(int _x, int _y, int _r) : x(_x), y(_y), r(_r) {}
    

    void showCircleInfo() {
        cout << x << " " << y << " " << r << endl;
    }

    // private member variable을
    // 읽는 read method  --> getter
    // 쓰는 write method --> setter
    void setX(int _x){
        x = _x;
    }
    int getX(){
        return x;
    }

};

bool compare_circle(Circle c, Circle d) {
    if(c.getX() == d.getX()){
        c.setX(30);
        cout << "c.setX(30) : " << c.getX() << endl;
            // 여기서 30으로 바꿔도 call by value기 때문에 main에서 c.x는 바뀌지 않는다
        return true;
    }
    return false;
    
}

bool compare_circle2(Circle& c, Circle& d) {
    if(c.getX() == d.getX()){
        c.setX(20);
        cout << "c.setX(20) : " << c.getX() << endl;
            // 여기서 20으로 바꾸면 call by reference기 때문에 main에서 c.x도 바뀐다
        return true;
    }
    return false;
}

int main(void){

    /*
        array --> 함수로 call by reference
        object -> 함수로 call by value
        
        object가 함수로 call by value로 넘어가면
        사이즈가 커지니까
        reference 로 넘길 수 있다 --> &
    */
    Circle c(10,10,30);
    Circle d(10,10,20);
    
    cout << "before c.getX() : " << c.getX() << endl;

    cout << compare_circle(c, d) << endl;
    cout << "after c.getX() : " << c.getX() << endl;

    cout << compare_circle2(c, d) << endl;
    cout << "after c.getX() : " << c.getX() << endl;


    return 0;
}