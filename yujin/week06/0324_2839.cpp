#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin>>n;

    vector<int> v(n+1,n);
    v[0]=0;

    for(int i=0; i<=n-3; i++){
        v[i+3] = min({v[i+3], v[i]+1}); 
        
        if(i+5<=n){            
            v[i+5] = min({v[i+5], v[i]+1});
        }    
    }
    
    if(v[n]==n){
        cout<<-1;
    }
    else{
        cout<<v[n];
    }

    return 0;
}//dp 설탕배달