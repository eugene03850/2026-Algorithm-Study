#include <iostream>
#include <vector>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

    
    int n,m;
    cin>>n>>m;

    vector<int> cards(n);
    
    for(int i=0; i<n; i++){
        cin>>cards[i];
    }

    int highest = 0;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                int sum = cards[i]+cards[j]+cards[k];
                if(sum<=m && sum>highest){
                    highest=sum;
                }
            }
        }
    }
    

    cout<<highest;
    return 0;
}
//블랙잭
