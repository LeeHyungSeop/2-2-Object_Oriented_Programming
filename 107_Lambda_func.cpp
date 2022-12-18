#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
    Lambda function == Lambda expression
    --> 무명씨 (작자 미상)

    함수는 대부분 이름을 갖는다.
    
    이름없는 함수 -> Lambda function -> why? 한 번 쓰고 안 쓸 함수에 이름을 붙이지 않기 위해


*/

bool my_my_func (int i) {
    if(i%2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main(void) {

    vector<int> nums = {1,2,3,4,5};

    auto count = count_if(nums.begin(), nums.end(), my_my_func);
    cout << "일반함수로 짝수개수 세기 : " << count << endl;
    
    auto count2 = count_if(nums.begin(),nums.end(),
    [](int x) {if (x % 2 == 0) {return true;} else return false;}
    );
    cout << "람다함수로 짝수개수 세기 : " << count2 << endl;

    

    return 0;
}