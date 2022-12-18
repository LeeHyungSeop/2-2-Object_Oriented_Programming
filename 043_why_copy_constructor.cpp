#include <iostream>

using namespace std;

/*
    왜 복사 생성자(copy constructor)를 알아야 하는가?
        computer를 전공하는 사람들의 강점

    복사 생성자는 평소에 무시해도 되지만,
    그러나, 객체 안에서 "동적 메모리 할당"을 할 때는 주의를 기울여야 함
    필요한 메모리를 다시 할당 받아야 한다.
    
*/

bool compare(int a, int b){
    return a<b;
}

class MyArray {

public :
    int size;
    int* data;

    MyArray(int _size) {
        this->size = _size;
        data = new int[this->size]; // 정수 배열을 선언
        for(int i = 0 ; i < this->size ; i++) {
            data[i]= 9-i;
        }
    }

    // MyArray b = a; 문제를 해결하기 위해 복사 생성자를 만들어야 한다.
    MyArray(const MyArray& p) {
        // this->data = p.data; // --> shallow copy. 이렇게 하면 문제가 발생
        this->size = p.size;
        this->data = new int[this->size];   // 오리지널 class가 할당받은 주소를 같이 쓰면 안되니까
                                            // 새로 만들어진 객체를 위한 주소를 따로 할당해준다 --> deep copy
        for (int i = 0; i < p.size; i++) // 오리지널로부터 값들을 복사해 와야 한다
        {
            this->data[i] = p.data[i];
        }
        sort(data, data+(this->size), compare);
    }

    ~MyArray(){ // 동적할당 data를 반납
        delete[] data;
    }
    void showArr(){
        for (int i = 0; i < this->size; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }

};

int main(void){

    MyArray a(10);
    a.showArr();

    {
        MyArray b = a;  // {}가 끝나면 b는 사라진다
                        // b는 객체니까 destructor를 불러서
                        // a가 사용하던 곳의 메모리를 delete해버린다.

                        // 그래서 복사생성자를 만들어줘서 따로 메모리를 할당해주는 함수를 만들어줘야 한다.

        b.showArr();
    }
    
    a.showArr();

    return 0;
}