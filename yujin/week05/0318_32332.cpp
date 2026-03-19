#include <iostream>
using namespace std;


int main() {
    int y0, m0, d0;
    double t0, p0;
    int y1, m1, d1;
    double t1, p1;

    cin>>y0>>m0>>d0>>t0>>p0;
    cin>>y1>>m1>>d1>>t1>>p1;

    int d = d0-(d1-d0);
    int m = m0-(m1-m0);
    int y = y0-(y1-y0);

    if(d<1){ //d==0 -> 30, d==-1 -> 29 ...
        d+=30;
        m--;
    }
    else if(d>30){
        d-=30;
        m++;
    }
    if(m<1){
        m+=12;
        y--;
    }
    else if(m>12){
        m-=12;
        y++;
    }

    double t = 2*t0-t1;
    double p = 2*p0-p1;

    cout << fixed;
    cout.precision(3);

    cout<<y<<" "<<m<<" "<<d<<" "<<t<<" "<<p;
    return 0;
}//세종이의 시간 여행