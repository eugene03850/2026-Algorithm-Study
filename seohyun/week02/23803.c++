#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n*n*4; i++){
        cout << "@";
        if((i % n) == 0){
            cout << "\n";
        }
    }
    for(int i = 1; i <= n*n*5; i++){
        cout << "@";
        if((i % (n*5)) == 0){
            cout << "\n";
        }
    }
}