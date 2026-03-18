#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    cin>>n;

    vector<int> v(12,0);

    v[1]=1;
    v[2]=2;
    v[3]=4;

    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        if(num<=3){
            cout<<v[num]<<'\n';
        }
        else{
            int index=4;
            while(index<=num){
                v[index]=v[index-1]+v[index-2]+v[index-3];
                index++;
            }
            cout<<v[num]<<'\n';
        }
    }


    return 0;
}