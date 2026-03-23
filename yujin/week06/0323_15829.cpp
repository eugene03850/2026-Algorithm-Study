#include <iostream>
#include <string>
using namespace std;

const int PRIME = 1234567891;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int len;
    string str;

    cin>>len>>str;

    long long sum=0;
    long long r=1;

    for(int i=0; i<len; i++){
        sum+=((str[i]-96)*r)%PRIME;
        r=(r*31)%PRIME;
    }  
    cout<<sum%PRIME;

    return 0;
}//Hashing

// 모듈러 분배 법칙
// (a + b) % m = ((a % m) + (b % m)) % m
// (a * b) % m = ((a % m) * (b % m)) % m
// (a - b) % m = ((a % m) - (b % m) + p) % m # 음수 방지
