#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int l,n;
    cin>>l;

    vector<int> v(l,0);
    for(int i=0; i<l; i++){
        cin>>v[i];
    }

    sort(v.begin(), v.end());

    cin>>n;


    int start=0, end=0;
    if(n<v[0]){
        start=0; end=v[0];
    }
    else{
        for(int i=0; i<l; i++){
            if(v[i]==n){
                cout<<0;
                return 0;
            }
            if(v[i]>n){
                start=v[i-1];
                end=v[i];
                break;
            }
        }
    }

    int total = (end-start-1)*(end-start-2)/2;
    int over = (end-n-1)*(end-n-2)/2;
    int under = (n-start-1)*(n-start-2)/2;

    cout<<total-over-under;

    return 0;
}//좋은 구간