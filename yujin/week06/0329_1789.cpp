#include <iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    unsigned int s;

    cin>>s;

    int sum=0;
    int index =1;
    while(true){
        if(s-sum<index) break;
        sum+=index++;
    }

    cout<<index-1;


    return 0;
}