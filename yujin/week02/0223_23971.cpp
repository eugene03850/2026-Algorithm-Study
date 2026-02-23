#include <iostream>
#include <cmath>
using namespace std;


int main() {
    double h,w,n,m;
    cin>>h>>w>>n>>m;

    int col = ceil(h/(n+1));
    int row = ceil(w/(m+1));

    cout<<col*row;
    

    return 0;
}