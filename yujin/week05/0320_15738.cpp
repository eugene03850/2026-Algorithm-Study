#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n,k,m;
    cin>>n>>k>>m;

    int index = k-1;
    for(int i=0; i<n; i++){
        int num;
        cin>>num;
    }

    for(int i=0; i<m; i++){
        int op;
        cin>>op;

        if(op>0 && index<op){
            index = op-index-1;
        }
        else if(op<0 && index>=n+op){
            index = (n-1-index)+(n+op);
        }
        
    }

    cout<<index+1;
    

    return 0;
}