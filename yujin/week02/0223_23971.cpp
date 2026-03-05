#include <iostream>
using namespace std;


int main() {
    // double h,w,n,m;
    // cin>>h>>w>>n>>m;

    // int col = ceil(h/(n+1));
    // int row = ceil(w/(m+1));

    // hwnm을 정수로 두고 올림공식 사용

    int h,w,n,m;
    cin>>h>>w>>n>>m; 

    int col = (h+n)/(n+1);
    int row = (w+m)/(m+1);
    cout<<col*row;
    

    return 0;
}