#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;



bool compare(const pair<int, string>& a, const pair<int, string>& b){
    return a.first>b.first;
}


int main() {
    int n,p;
    

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>p;
        vector<pair <int, string>> player;
        for(int j=0; j<p; j++){
            
            string name; int pay;
            cin>>pay>>name;

            player.push_back(make_pair(pay, name));
        }
        sort(player.begin(), player.end(), compare);
        cout<<player.front().second<<'\n';
    }


    return 0;
}