#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Climbing
{
    int num;
    int rank;
    int rank_sum;
};

bool compare(Climbing a, Climbing b){
    if(a.rank != b.rank){
        return a.rank < b.rank;
    }
    if(a.rank_sum != b.rank_sum){
        return a.rank_sum < b.rank_sum;
    }
    return a.num < b.num;
}

int main(){
    int n;
    cin >> n;

    vector<Climbing> players(n);
    
    for(int i = 0; i < n; i++){
        int buf0, buf1, buf2;
        cin >> players[i].num >> buf0 >> buf1 >> buf2;

        players[i].rank = buf0 * buf1 * buf2;
        players[i].rank_sum = buf0 + buf1 + buf2;
    }
    sort(players.begin(), players.end(), compare);
    cout << players[0].num << " " << players[1].num << " " << players[2].num;
}
