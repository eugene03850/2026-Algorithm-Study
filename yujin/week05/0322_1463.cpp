#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin>>n;

    vector<int> v(n+1);
    v[0]=0; v[1]=0; 

    for(int i=2; i<=n; i++){
        v[i]=v[i-1]+1;
        if(i%3==0){
            v[i]=min({v[i/3]+1, v[i]});
        }
        if(i%2==0){
            v[i]=min({v[i], v[i/2]+1});
        }
        
    }

    cout<<v[n];

    return 0;
}