#include <iostream>
#include <map>
using namespace std;

int main(){
    int n, m, ans = 0;
    cin >> n;
    map<int, int> how_many;

    for(int i = 0; i < n ; i++){
        cin >> m;
        while(m % 2 == 0){
            m /= 2;
        }
        if(how_many.count(m) == 0){
            how_many[m] = 1;
        }
        else{
            how_many[m]++;
        }
    }
    for(auto const & c : how_many){
        ans = max(ans, c.second);
    }
    cout << ans;
}