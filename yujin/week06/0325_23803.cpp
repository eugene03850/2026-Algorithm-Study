#include <iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin>>n;

    int height = 4*n;
    int width = 5*n;

    while(height--){
        for(int i=0; i<n; i++){
            cout<<'@';
        }
        cout<<'\n';
    }
    while(n--){
        for(int i=0; i<width; i++){
            cout<<'@';
        }
        cout<<'\n';
    }


    return 0;
}