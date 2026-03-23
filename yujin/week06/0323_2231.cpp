#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin>>n;

    
    bool is_found=false;
    
    int len = to_string(n).length();
    int start = max({1, n-len*9});

    for(int i=start; i<=n; i++){
        int sum=i;
        int tmp=i;

        while(tmp>0){
            sum+=tmp%10; // 마지막 자리부터 하나씩 올라가면서 더하기
            tmp/=10;
        }

        if(sum==n){
            cout<<i;
            is_found=true;
            break;
        }
    }
    
    if(!is_found) cout<<0;

    return 0;
}//분해합