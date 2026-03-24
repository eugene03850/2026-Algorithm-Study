#include <iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n,k;
    cin>>n>>k;

    if(n-k<k){
        k=n-k;
    }

    int nfac=1;
    int kfac=1;

    while(k){
        nfac*=n--;
        kfac*=k--;
    }

    cout<<nfac/kfac;


    return 0;
}//이항 계수 1