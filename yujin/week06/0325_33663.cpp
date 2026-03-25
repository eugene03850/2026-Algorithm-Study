#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    double h1, h2, s1, s2, v1, v2, r, g, b;
    cin>>h1>>h2;
    cin>>s1>>s2;
    cin>>v1>>v2;
    cin>>r>>g>>b;

    double M = max({r,g,b});
    double m = min({r,g,b});

    double V = M;

    if(V<v1 || V>v2){
        cout<<"Lumi will not like it.";
        return 0;
    }

    double S = 255*(V-m)/V;

    if(S<s1 || S>s2){
        cout<<"Lumi will not like it.";
        return 0;
    }

    double H=0;
    
    if(M==r){
        H=(60*(g-b))/(V-m);
    }
    else if(M==g){
        H=120+(60*(b-r))/(V-m);
    }
    else{
        H=240+(60*(r-g))/(V-m);
    }

    if(H<0) H+=360;

    if(H<h1 || H>h2){
        cout<<"Lumi will not like it.";
        return 0;
    }

    cout<<"Lumi will like it.";
    return 0;
}