#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<string,int>& a, pair<string,int>& b){
    if(a.second!=b.second) return a.second>b.second;
    return a.first<b.first;
}

int parseString(string time){
    int min = (time[0]-'0')*10+time[1]-'0';
    int sec = (time[3]-'0')*10+time[4]-'0';

    return min*60+sec;

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin>>n;

    map<string, int> m;

    while(n--){
        string time, name;
        cin>>time>>name;

        auto it = m.find(name);
        if(it!=m.end()){
            it->second+=parseString(time);
        }
        else{
            m.insert({name, parseString(time)});
        }
    }

    vector<pair<string, int>> v;

    for(auto i:m){
        int charge=10;
        if(i.second>100){
            charge+=((i.second-100+49)/50)*3;
        }
        v.push_back({i.first, charge});
    }

    sort(v.begin(), v.end(), compare);
    for(auto i:v){
        cout<<i.first<<" "<<i.second<<'\n';
    }
    return 0;
}