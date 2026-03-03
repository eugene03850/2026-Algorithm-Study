#include <iostream>
#include <string>
using namespace std;


int main() {
    int n;
    string channel;

    int pos1=0;
    int pos2=0;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>channel;
        if(channel=="KBS1"){
            pos1=i;
        }
        else if(channel=="KBS2"){
            pos2=i;
        }
        
    }

    for(int i=0; i<pos1; i++){
        cout<<1;
    }
    for(int i=0; i<pos1; i++){
        cout<<4;
    }

    if(pos1>pos2){
        pos2++;
    }

    for(int i=0; i<pos2; i++){
        cout<<1;
    }
    for(int i=1; i<pos2; i++){
        cout<<4;
    }


    return 0;
}