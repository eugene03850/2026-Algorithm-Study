#include <iostream>
#include <algorithm>
using namespace std;

int getGCD(int n, int m){
    while(m>0){
        n%=m;
        swap(n,m);
    }
    return n;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, m;

    cin>>n>>m;

    if(n<m){
        swap(n,m);
    }

    int gcd = getGCD(n,m);
    cout<<gcd<<'\n'<<n*m/gcd;

    return 0;
}//최대공약수와 최소공배수


// 유클리드 호제법
// - 두 정수 a,b가 주어짐(a>b)
// - a와 b의 최대공약수는 a%b와 b의 최대공약수와 같음
// - a%b를 구한 후, 왼쪽 값>오른쪽 값이어야 하므로 위치 바꿈
// - b가 0일 때, a의 값이 최대공약수