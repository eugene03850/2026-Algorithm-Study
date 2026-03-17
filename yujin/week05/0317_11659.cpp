#include <iostream>
#include <vector>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long n, m, a, b;
    cin>>n>>m;


    vector<long> v(n);
    vector<long> sum(n+1);
    sum[0]=0;

    for(int i=0; i<n; i++){
        cin>>v[i];
        sum[i+1]=sum[i]+v[i];
    }

    for(int i=0; i<m; i++){
        cin>>a>>b;
        cout<<sum[b]-sum[a-1]<<'\n';
    }

    


    return 0;
} //구간 합 구하기 4