#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    long long x;

    cin>>n>>x;

    vector<long long> min_weight(n); //최종 몸무게 하한
    
    long long max_limit=0;
    long long gain_sum=0;

    for(int i=0; i<n; i++){
        cin>>min_weight[i];
        if(min_weight[i]>max_limit){
            max_limit=min_weight[i];
        }
    }

    long long today_gain;
    for(int i=0; i<n; i++){
        cin>>today_gain;
        gain_sum+=today_gain;
        if(gain_sum<min_weight[i]){
            cout<<-1;
            return 0;
        }
    }

    cout<<(gain_sum-min_weight[n-1])/x;
    

    return 0;
}

//보디빌딩