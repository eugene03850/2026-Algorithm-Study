#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

int calc(const vector<tuple<int,int,int,int>>& rank, int k){
    int cnt=0;
    int gold_k, silver_k, bronze_k;

    for(int i=0; i<rank.size(); i++){
        if(get<0>(rank[i]) == k){
            gold_k = get<1>(rank[i]);
            silver_k = get<2>(rank[i]);
            bronze_k = get<3>(rank[i]);
        }
    }

    for(int i=0; i<rank.size(); i++){
        if(get<1>(rank[i])>gold_k){
            cnt++;
        }
        else if(get<1>(rank[i])==gold_k&&get<2>(rank[i])>silver_k){
            cnt++;
            
        }
        else if(get<1>(rank[i])==gold_k&&get<2>(rank[i])==silver_k&&get<3>(rank[i])>bronze_k){
            cnt++;
        }
    }

    return cnt+1;
}


int main() {
    int n,k;
    int nation, go, si, br;

    cin>>n>>k;
    vector<tuple<int,int,int,int>> rank(n);

    for(int i=0; i<n; i++){
        cin>>nation>>go>>si>>br;
        rank[i] = make_tuple(nation,go,si,br);
    }

    cout<<calc(rank, k);

    
    
    return 0;
}