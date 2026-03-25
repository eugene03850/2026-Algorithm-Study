#include <iostream>
#include <vector>
using namespace std;

int sumResident(int k, int n){
    vector<int> below = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int result=0;

    for(int i=1; i<=k; i++){
        vector<int> cur={0,1};
        for(int j=2; j<=n; j++){
            cur.push_back(cur.back()+below[j]);
        }
        below = cur;
        result = cur.back();
    }

    return result;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int tc;
    cin>>tc;

    int k,n;
    for(int i=0; i<tc; i++){
        cin>>k>>n;
        cout<<sumResident(k,n)<<'\n';

    }

    return 0;
}