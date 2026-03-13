#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;

    vector<int> power(n);
    int location=0;

    for(int i=0; i<n; i++){
        cin>>power[i];
        if(power[i]==-1){
            location=i;
        }
    }

    int left = *min_element(power.begin(), power.begin()+location);
    int right = *min_element(power.begin()+location+1, power.end());

    cout<<left+right;

    return 0;
}
//펭귄추락대책위원회