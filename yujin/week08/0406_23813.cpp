#include <iostream>
#include <string>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string str;
    cin>>str;

    int digit = str.length();
    long long sum=0;
    for(int i=0; i<digit; i++){
        int n = str[i]-'0';
        int index=1;
        for(int j=0; j<digit; j++){
            sum+=n*index;
            index*=10;
        }
    }

    cout<<sum;

    return 0;
}//회전