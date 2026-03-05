#include <iostream>
using namespace std;


int main() {
    int n; 
    cin>>n;

    int i=0;
    int layer=1;

    while(true){
        layer = layer+6*i;
        if(n<=layer){
            break;
        }
        i++;
    }

    cout<<i+1;

    
    return 0;
}