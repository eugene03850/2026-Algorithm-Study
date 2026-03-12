#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long getCheapest(const vector<long long>& dist, const vector<long long>& oilprice){
    
    long long cheapest=oilprice[0];
    long long result = cheapest*dist[0];
    
    for(int i=1; i<dist.size(); i++){
        if(oilprice[i]<cheapest){
            cheapest = oilprice[i];
        }
        result += cheapest*dist[i];
    }

    return result;
}


int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

    int n;
    cin>>n;

    vector<long long> dist;
    vector<long long> oilprice;

    int tmp;
    for(int i=0; i<n-1; i++){
        cin>>tmp;
        dist.push_back(tmp);
    }
    for(int i=0; i<n; i++){
        cin>>tmp;
        oilprice.push_back(tmp);
    }

    cout<<getCheapest(dist, oilprice);


    return 0;
}