/*
    class로부터 instance(객체)가 만들어짐

    Circle cs[5]; --> 배열로 하게 되면 사이즈가 한정적이다
    
    linked list == vector를 사용하면 된다

*/

#include <iostream>
#include <vector>  // linked list : DLL 기능 제공

using namespace std;

class Circle{

public :
    int x,y;    // 중점의 좌표
    int radius; // 반지름

    Circle() : x(0), y(0), radius(0) {
        cout << "circle constructor was invoked\n";
    }

    void showCircleInfo() {
        cout << x << " " << y << " " << radius << endl;
    }

};

int main(void){

    /*
        template --> 형식은 제공, 내용은 사용자가 채워놓는다(data type 맘대로 사용 가능)
        standard template library (STL) --- vector, queue, ...

            vector는 class이다
            여러 method가 있다.
    */

    // int형 변수 5개가 저장되는 vector
    vector<int> first(5);

    // vector를 array처럼 쓸 수 있다
    for(auto v : first) {
        cout << v << endl;
            // default값이 0이라는 것을 알 수 있다
    }
    cout << "-----------------------\n";

    first[4] = 1;
    cout << first[4] << endl;
    first[4] = 2;
    cout << first.at(4) << endl; 
    cout << "-----------------------\n";

    first.push_back(100); // 노드 추가
    first.push_back(200);
    for(auto v : first) {
        cout << v << endl;
    }
    cout << "front value : " << first.front() << " back value: " << first.back() << endl;
    cout << "-----------------------\n";

    first.pop_back(); // 노드 삭제
    first.pop_back();
    for(auto v : first) {
        cout << v << endl;
    }
    cout << "-----------------------\n";

    first.push_back(100); // 노드 추가
    first.push_back(200);
    // begin : 맨 앞의 주소(=Head) , end : 맨 뒤의 주소의 다음 주소!
    for(auto p = first.begin() ; p < first.end(); p++){
        cout << *p << endl;
    }
    cout << "-----------------------\n";

    vector<int> b;
    b = first;

    vector<int> c(5);
    c[4]=2;
    c.push_back(100); // 노드 추가
    c.push_back(200);
    

    if(first == b) {
        cout << "they are same" << endl;
    }
    // vector 내용이 같은지 다른지 비교
    if(first == c) {
        cout << "they are same" << endl;
    }
    cout << "-----------------------\n";
    
    // insert(삽입할 곳의 주소, 값)
    first.insert(first.begin(),999);
    first.insert(first.begin() + 1,888);
    for(auto p = first.begin() ; p < first.end(); p++){
        cout << *p << endl;
    }
    cout << "-----------------------\n";

    for(int j = 0 ; j < first.size() ; j++){
        if(first[j] == 0){ // 0인 노드는 모두 삭제
            first.erase(first.begin()+j);
            j--;
        }
    }

    for (auto& i : first) {
        cout << i << endl;
    }
    
    
    cout << "-----------------------\n";

    // clear
    cout << "size : " << first.size() << endl;
    first.clear();
    cout << "size : " << first.size() << endl;
    cout << "-----------------------\n";

    // assign ( , )    https://cplusplus.com/reference/vector/vector/assign/
    



    return 0;
}