#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    string buf;

    cin >> n;
    set<string> numbers;

    for(int i = 0; i < n; i++){
        cin >> buf;
        numbers.insert(buf);
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> buf;
        if(numbers.find(buf) == numbers.end()) cout << 0 << "\n";
        else cout << 1 << "\n";
    }
}