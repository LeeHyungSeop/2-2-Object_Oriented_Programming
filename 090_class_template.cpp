#include <iostream>

using namespace std;

/*
    class          : object, instance를 만들어냄

    class Template : class를 만들어냄
*/

template <typename T>

class Box {

private :
    T data;

public :
    Box() {}
    Box(T _data) : data(_data) {}
    
    T getData() {
        return data;
    }
    void setData(T _data) {
        data = _data;
    }
    void showMyData() {};

};

template <typename T1, typename T2>
class DoubleBox {

private :
    T1 data1;
    T2 data2;

public :

};

template <typename T>
void Box<T> :: showMyData() {
    cout << data << endl;
}

class MyItem {

private :
    int k;

public :
    MyItem() {
        k = 99;
    }
    void showK() {
        cout << k << endl;
    }

};

int main(void){
    
    Box<MyItem> my_box; // Box class내 data변수의 type은 MyItem이라는 Class이다.

    MyItem i;           // MyItem Class로부터 i라는 instance를 만든다.

    my_box.setData(i);  // my_box instance의 data변수에 MyItem class로부터 만든 객체인 i를 저장한다
    
    MyItem v = my_box.getData(); 
    v.showK();

    DoubleBox<string, int> db1;
    DoubleBox<string, string> db2;

    

    return 0;
}