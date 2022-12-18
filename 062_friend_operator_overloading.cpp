#include <iostream>

using namespace std;

/*

    >> , << 연산자의 중복. operator overloading
    
        -> 당연히 객체에 대해서만 적용 ->  cout << (객체)

    friend를 이용해야 함

*/

class Point {

private :
    int x, y;

public :
    friend ostream& operator<<(ostream& os, Point& p);
    friend istream& operator>>(istream& is, Point& p);

    Point(int _x, int _y) : x(_x), y(_y) {

    }
    
    void showPoint() {
        cout << x << " , " << y <<endl;
    }

};

// output stream
ostream& operator<<(ostream& os, Point& p) {
    os << p.x << " , " << p.y << endl;
    return os;
}

// input stream
istream& operator>> (istream& is, Point& p) {
    is >> p.x >> p.y;
    return is;
}

int main(void){

    Point p(10, 20);
    p.showPoint(); // 이렇게 하는게 좋다. (friend 함수 이용해서 << >> operator overloading 사용하는 것보다..)

    cin >> p;
    
    // cout << p ;
    cout << p << p; // return값을 ostream&으로 해준 이유

    return 0;
}