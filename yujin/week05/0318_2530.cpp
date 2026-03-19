#include <iostream>
using namespace std;


int main() {
    int h,m,s,time;
    cin>>h>>m>>s;
    cin>>time;

    h+=time/3600;
    m+=(time%3600)/60;
    s+=(time%3600)%60;

    if(s>59){
        m+=s/60;
        s%=60;
    }
    if(m>59){
        h+=m/60;
        m%=60;
    }
    if(h>23){
        h%=24;
    }

    cout<<h<<" "<<m<<" "<<s;

    return 0;
}//인공지능 시계