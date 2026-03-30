#include <iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int tc;
    cin>>tc;

    while(tc--){
        int c;
        cin>>c;

        cout<<c/25<<" "<<c%25/10<<" "<<c%25%10/5<<" "<<c%5<<'\n';
    }



    return 0;
} //세탁소 사장 동혁

//쿼터(25센트), 다임(10센트), 니켈(5센트)의 개수, 페니(1센트)