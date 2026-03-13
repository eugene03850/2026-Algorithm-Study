#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    int t,p;
    vector<int> size(6,0);

    cin>>n;

    for(int i=0; i<6; i++){
        cin>>size[i];
    }

    cin>>t>>p;

    int package_T=0;
    int package_P=0;
    int single_P=0;
    
    for(int i=0; i<6; i++){
        package_T+=size[i]/t;
        if(size[i]%t!=0){
            package_T+=1;
        }
    }
    package_P=n/p;
    single_P=n%p;

    cout<<package_T<<'\n'<<package_P<<" "<<single_P;

    return 0;
}