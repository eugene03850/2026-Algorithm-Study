#include <iostream>
#include <string>
using namespace std;

int getHeadNum(int h, string& c){
    for(int i=0; i<c.length(); i++){
        if(c[i]=='c'){
            h++;
        }
        else{
            h--;
        }
    }

    return h;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int k;
    cin>>k;
    for(int i=1; i<=k; i++){
        int h;
        string c;

        cin>>h>>c;

        cout<<"Data Set "<<i<<":\n"<<getHeadNum(h,c)<<"\n\n";
    }


    return 0;
}//헤라클레스와 히드라