#include <iostream>
#include <cmath>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int m;
    double a,b;
    while(true){
        cin>>m>>a>>b;
        if(m==0 && a==0 && b==0) break;

        long total = (int)round((m*(b-a)*3600)/(a*b));
        int hour = total/3600;
        int minute = total%3600/60;
        int second = total%60;

        cout<<hour<<":";
        if(minute<10) cout<<0;
        cout<<minute<<":";
        if(second<10) cout<<0;
        cout<<second<<'\n';
    }
    



    return 0;
}