#include <iostream>
#include <vector>    // linked list
#include <algorithm> // sort()

/*
    STL(Standard Template Library) 사용 이유?
        algorithom

*/

using namespace std;

class Circle{

public :
    int x,y; // 중점의 좌표
    int radius; // 반지름

    Circle() : x(0), y(0), radius(0) {
        cout << "circle constructor was invoked\n";
    }

    void showCircleInfo() {
        cout << x << " " << y << " " << radius << endl;
    }

};

// 방법 -> 함수이름 맘대로. Return type : bool
bool compare(int a,int b) {
    return a<b;
    // 뒤의 숫자가 더 크면 true 반환 --> 오름차순

    // return a>b;
    // 뒤의 숫자가 더 작으면 true 반화 --> 내림차순
}

bool compare2(Circle a,Circle b) {
    // 원의 중점의 합이 더 크면 크다고 기준을 직접 세운다
    if((a.x + a.y) < (b.x + b.y)) {
        return true;
    }
    return false;
}

bool compare3(Circle a,Circle b) {
    // 반지름이 더 크면 크다고 기준을 직접 세운다
    if(a.radius < b.radius) {
        return true;
    }
    return false;
}

int main(void){

    vector<int> first {5,4,3,2,1};
    
    for (auto& v : first) {
        cout << v << endl;
    }
    cout << "-------------\n";

    // sort(시작주소, 끝주소, 방법) 
    sort(first.begin(), first.end(), compare);
    for (auto& v : first) {
        cout << v << endl;
    }
    cout << "-------------\n";


    // 객체끼리 대소비교는 compare2, compare3로 사용자가 원하는 대소비교 기준을 세워야 한다.
    vector<Circle> cs;
    cout << boolalpha;
    sort(cs.begin(), cs.end(), compare2);
    sort(cs.begin(), cs.end(), compare3);
    cout << "-------------\n";
    

    return 0;
}