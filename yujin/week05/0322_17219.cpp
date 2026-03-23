#include <iostream>
#include <string>
#include <map>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,m;
    cin>>n>>m;

    map<string,string> ssmap;

    for(int i=0; i<n; i++){
        string url,pw;
        cin>>url>>pw;

        ssmap.insert({url,pw});
        
    }

    for(int i=0; i<m; i++){
        string url;
        cin>>url;
        auto it = ssmap.find(url);
        cout<<it->second<<'\n';
    }


    return 0;
}// 비밀번호 찾기