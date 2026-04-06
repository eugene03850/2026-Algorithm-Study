#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin>>n;
    vector<double> va;
    vector<double> vb;

    while(n--){
        int a,b;
        cin>>a>>b;

        va.push_back(a*0.5);
        vb.push_back(b*0.5);
    }

    va.push_back(va[0]);
    vb.push_back(vb[0]);

    long double sum=0;

    for(int i=0; i<va.size()-1; i++){
        sum+=va[i]*vb[i+1]-va[i+1]*vb[i];
    }

    if(sum<0) sum*=-1.0;

    cout<<fixed << setprecision(1)<<sum;

    return 0;
}