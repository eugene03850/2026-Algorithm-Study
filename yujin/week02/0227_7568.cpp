#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

vector<int> calcRank(const vector<pair<int, int>>& v){
    int n = v.size();
    vector<int> rank(n, 0);
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                continue;
            }
            else if(v[i].first>v[j].first && v[i].second>v[j].second){
                rank[j]++;
            }
        }
    }

    return rank;
}


int main() {
    int n;
    int weight=0, height=0;
    vector<pair<int, int>> v;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>weight>>height;
        v.push_back({weight, height});

    }

    vector<int> rank = calcRank(v);
    for(int i=0; i<n; i++){
        cout<<rank[i]+1<<' ';
    }


    return 0;
}