#include <iostream>

using namespace std;

/*
    access control (접근 제어)

        private --> getter, setter을 활용하여 R/W (getter, setter는 public으로 해야 한다)

        public

        protected

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

int main(void){

    Circle c(10,10,30);
    c.showCircleInfo();
    

    return 0;
}