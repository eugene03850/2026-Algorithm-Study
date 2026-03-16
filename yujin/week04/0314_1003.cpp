#include <iostream>
#include <vector>
using namespace std;

const int MAX_SIZE = 41;

vector<pair<int, int>> fibonacci(){
    vector<pair<int, int>> result(MAX_SIZE);
    result[0]=make_pair(1,0);
    result[1]=make_pair(0,1);

    for(int i=2;i<MAX_SIZE;i++){
        result[i].first = result[i-1].first + result[i-2].first;
        result[i].second = result[i-1].second + result[i-2].second;
    }
    return result;
}

int main() {
    pair<int, int> calls;
    vector<pair<int,int>> vcalls(MAX_SIZE);

    vcalls = fibonacci();

    int t,n;
    cin>>t;

    for(int i=0; i<t; i++){
        cin>>n;
        cout<<vcalls[n].first<<" "<<vcalls[n].second<<'\n';
    }

    return 0;
}