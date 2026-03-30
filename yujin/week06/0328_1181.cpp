#include <iostream>
#include <string>
#include <set>
using namespace std;

struct compare{
    bool operator()(string a, string b) const{
            if(a.length()==b.length()){
            return a<b;
            }
            else{
                return a.length()<b.length();
            }
        
    }
    
};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin>>n;

    set<string, compare> s;

    for(int i=0; i<n; i++){
        string str;
        cin>>str;

        s.insert(str);
    }

    for(auto i:s){
        cout<<i<<'\n';
    }
    
    return 0;
}