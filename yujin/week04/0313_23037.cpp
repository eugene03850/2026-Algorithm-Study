#include <iostream>
#include <vector>
using namespace std;


int main() {

    int n;
    cin>>n;

    int sum=0;
    vector<int> num;

    for(int i=10000; i>0; i/=10){
        num.push_back(n/i);
        n-=(n/i)*i;
    }

    for(int i=0; i<5; i++){
        sum+=num[i]*num[i]*num[i]*num[i]*num[i];
    }
    cout<<sum;

    return 0;
}

//5의 수난