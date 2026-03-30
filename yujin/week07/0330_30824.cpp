#include <iostream>
#include <vector>
using namespace std;

vector<long long> fibo(80,0);


vector<long long> findFibo(vector<long long>& fibo){
    fibo[0]=1;
    fibo[1]=1;
    for(int i=2; i<fibo.size(); i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }

    return fibo;
}

bool sumOfFibo(int k, long long x){
    if(k==1){
        for(int i=0; i<fibo.size(); i++){
            if(fibo[i]==x){
                return true;
            }
        }
        return false;
    }
    else if(k==2){
        for(int i=0; i<fibo.size(); i++){
            for(int j=0; j<fibo.size(); j++){
                if(fibo[i]+fibo[j]==x){
                    return true;
                }
            }
        }
        return false;
    }
    else{
        for(int i=0; i<fibo.size(); i++){
            if(sumOfFibo(k-1, x-fibo[i])) return true;
        }
        return false;
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    fibo=findFibo(fibo);

    int tc;
    cin>>tc;
    while(tc--){
        int k;
        long long x;
        cin>>k>>x;

        if(sumOfFibo(k,x)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }


    return 0;
}
