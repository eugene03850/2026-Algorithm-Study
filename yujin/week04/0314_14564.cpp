#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main() {
    int n,m,a;
    cin>>n>>m>>a; //게임 인원, M모게임, 주최자

    int num;
    int self=(m+1)/2;

    while(true){
        
        cin>>num;

        if(num==self){
            cout<<0;
            break;
        }

        a += (num-self);

        if(a>n){
            a-=n;;
        }
        else if(a<1){
            a+=n;
        }

        cout<<a<<'\n';
    }


    return 0;
}
//두부 게임