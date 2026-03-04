#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    int n;
    stack<int> s;
    cin >> n;
    for(int i = 0; i < n; i++){
        string what;
        cin >> what;
        if (what == "push"){
            int num;
            cin >> num;
            s.push(num);
        }
        if (what == "pop"){
            if (s.empty()) cout << -1 << "\n";
            else {
                cout << s.top() << "\n";
                s.pop();
            }
        }
        if (what == "size"){
            cout << s.size() << "\n";
        }
        if (what == "empty"){
            if(s.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        if (what == "top"){
            if (s.empty()) cout << -1 << "\n";
            else cout << s.top() << "\n";         
        }
    }
}