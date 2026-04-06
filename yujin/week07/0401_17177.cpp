#include <iostream>
#include <cmath>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int a,b,c;
    cin>>a>>b>>c;

    int result=(sqrt((a*a-b*b)*(a*a-c*c))-b*c)/a;

    if(result<=0) result =-1;
    cout<<result;


    return 0;
}