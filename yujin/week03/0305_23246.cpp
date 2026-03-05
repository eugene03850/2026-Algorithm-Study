#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>

using namespace std;

int main() {
    int n;
    int b,p,q,r;
    vector<tuple<int, int, int>> rank;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>b>>p>>q>>r;
        rank.push_back(make_tuple(p*q*r, p+q+r, b));
    }

    sort(rank.begin(), rank.end());

    cout<<get<2>(rank[0])<<" "<<get<2>(rank[1])<<" "<<get<2>(rank[2]);


    return 0;
}