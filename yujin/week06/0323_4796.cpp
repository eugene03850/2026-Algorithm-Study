#include <iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int l,p,v;
    int c=1;
    while(true){
        cin>>l>>p>>v;
        if((l+p+v)==0) break;

        int result = (v/p)*l;
        v%=p;
        if(v>l) result+=l;
        else result+=v;

        cout<<"Case "<<c<<": "<<result<<'\n';
        c++;
    }


    return 0;
}//캠핑