#include <iostream>
using namespace std;


int main() {
    int n, m;
    int stress=0;
    int a;
    int stressed_day=0;

    cin>>n>>m;

    for(int i=0; i<n; i++){
        cin>>a;
        if(stress+a<0){
            stress=0;
        }
        else{
            stress+=a;
        }

        if(stress>=m){
            stressed_day++;
        }
    }
    
    cout<<stressed_day;

    return 0;
}

//과민성 대장 증후군