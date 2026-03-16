#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;


int main() {
    int n,m;
    cin>>n>>m;

    string name;
    set<string> notheard;
    set<string> result;

    for(int i=0; i<n; i++){
        cin>>name;
        notheard.insert(name);
    }

    for(int i=0; i<m; i++){
        cin>>name;
        auto it = notheard.find(name);
        if(it!=notheard.end()){
            result.insert(*it);
        }
    }

    cout<<result.size()<<'\n';
    
    for(auto i : result){
        cout<<i<<'\n';
    }


    return 0;
}