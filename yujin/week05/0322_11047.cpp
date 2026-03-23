#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n,k;
    cin>>n>>k;

    vector<int> v(n);
    int index=0;

    for(int i=0; i<n; i++){
        cin>>v[i];
        if(index==0&&v[i]>k){
            index=i-1;
        }
        else if(v[n-1]<k){
            index=n-1;
        }
    }   

    int result=0;

    for(int i=index; i>=0; i--){
        result+=(k/v[i]);
        k%=v[i];
    }

    cout<<result;
    return 0;
}