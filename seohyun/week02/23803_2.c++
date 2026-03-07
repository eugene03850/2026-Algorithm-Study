#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;

    string column = string(n, '@') + '\n';
    string bottom = string(n*5, '@') + '\n';

    for(int i = 0; i < n*4; i++) cout << column;
    for(int i = 0; i < n; i++) cout << bottom;
}