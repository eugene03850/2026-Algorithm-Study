#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;

    vector<int> time(n);

    for(int i=0; i<n; i++){
        cin>>time[i];
    }

    sort(time.begin(), time.end());

    int waiting = 0;
    int sum=0;


    for(int i=0; i<n; i++){
        waiting+=time[i];
        sum+=waiting;
    }
    
    cout<<sum;

    return 0;
}
//ATM