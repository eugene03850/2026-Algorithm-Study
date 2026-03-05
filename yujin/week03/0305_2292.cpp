#include <iostream>
using namespace std;


int main() {
    int n; 
    cin>>n;

    int layer=1;
    int lastroom=1;

    while(n>lastroom){
        lastroom = layer*6+lastroom;
        layer++;
    }

    cout<<layer;

    
    return 0;
}