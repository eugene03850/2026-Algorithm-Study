#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int m,n,first;
    int sum=0;

    cin>>m>>n;

    int sqrt_m = (int)ceil(sqrt(m));
    int sqrt_n = (int)floor(sqrt(n));


    for(int i=sqrt_m; i<sqrt_n+1; i++){
        int num = i*i;
        
        if(sum==0){
            first=num;
        }
        sum+=num;
            
        
    }
    if(sum==0){
        cout<<-1;
    }

    else{
        cout<<sum<<"\n"<<first;
    }

    return 0;
}