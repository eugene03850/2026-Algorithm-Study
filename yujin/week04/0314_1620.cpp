#include <iostream>
#include <map>
#include <string>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int n,m;
    cin>>n>>m;

    map<int, string> intkey;
    map<string, int> strkey;

    intkey.insert({0,""});
    strkey.insert({"",0});

    string name;

    for(int i=1; i<=n; i++){
        cin>>name;
        intkey.insert({i, name});
        strkey.insert({name, i});
    }

    string query;
    

    for(int i=0; i<m; i++){
        cin>>query;
        if(query[0]>=65 && query[0]<=90){ //문자입력
            
            auto it = strkey.find(query);
            if(it!=strkey.end()){
                cout<<it->second<<'\n';
            }
        }
        else{ //숫자입력
            int key = stoi(query);
            auto it = intkey.find(key);
            if(it!=intkey.end()){
                cout<<it->second<<'\n';
            }

        }
    }


    return 0;
}