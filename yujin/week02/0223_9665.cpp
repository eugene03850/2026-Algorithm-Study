#include <iostream>
using namespace std;


int main() {

    int n;
    cin>>n;

    if(n%2==0){
        cout<<"SK";
    }
    else{
        cout<<"CY";
    }

    return 0;
}

// 원래 mod4에 switch문을 썼는데, 쓰고보니 mod2로도 될 것 같아서 2로 나눈 나머지로 판단하도록 수정.
// 추가로 수정하면 cout << (n % 2 ? "SK" : "CY"); 로도 가능할 듯.