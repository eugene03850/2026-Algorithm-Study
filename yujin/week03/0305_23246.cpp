#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>

using namespace std;

bool compare(const tuple<int, int, int>& a, const tuple<int, int, int>& b){
    if(get<1>(a)!=get<1>(b)){
        return get<1>(a)<get<1>(b);
    }
    else if(get<2>(a)!=get<2>(b)) {
        return get<2>(a)<get<2>(b);
    }
    else{
        return get<0>(a)<get<0>(b);
    }

}


int main() {
    int n;
    int b,p,q,r;
    vector<tuple<int, int, int>> rank;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>b>>p>>q>>r;
        rank.push_back(make_tuple(b, p*q*r, p+q+r));
    }

    sort(rank.begin(), rank.end(),compare);

    cout<<get<0>(rank[0])<<" "<<get<0>(rank[1])<<" "<<get<0>(rank[2]);


    return 0;
}