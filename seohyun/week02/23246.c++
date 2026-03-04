#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    int num[n], rank[n], rank_same[n];
    int medal[3], buf[3], if_same[3] = {99999, 99999, 99999};
    int medal_score[3] = {99999, 99999, 99999};

    for(int i = 0; i < n; i++){
        cin >> num[i];
        cin >> buf[0] >> buf[1] >> buf[2];
        rank[i] = buf[0] * buf[1] * buf[2];
        rank_same[i] = buf[0] + buf[1] + buf[2];
    }

    
    for(int i = 0; i < n; i++){
        if(medal_score[0] > rank[i] || (medal_score[0] == rank[i] && rank_same[i] < if_same[0]) || (medal_score[0] == rank[i] && rank_same[i] == if_same[0] && medal[0] > num[i])){
            medal_score[2] = medal_score[1];
            medal_score[1] = medal_score[0];
            medal_score[0] = rank[i];
            
            if_same[2] = if_same[1];
            if_same[1] = if_same[0];
            if_same[0] = rank_same[i];

            medal[2] = medal[1];
            medal[1] = medal[0];
            medal[0] = num[i];
        }
        else if(medal_score[1] > rank[i] || (medal_score[1] == rank[i] && rank_same[i] < if_same[1]) || (medal_score[1] == rank[i] && rank_same[i] == if_same[1] && medal[1] > num[i])){
            medal_score[2] = medal_score[1];
            medal_score[1] = rank[i];
            
            if_same[2] = if_same[1];
            if_same[1] = rank_same[i];

            medal[2] = medal[1];
            medal[1] = num[i];           
        }
        else if(medal_score[2] > rank[i] || (medal_score[2] == rank[i] && rank_same[i] < if_same[2]) || (medal_score[2] == rank[i] && rank_same[i] == if_same[2] && medal[2] > num[i])){
            medal_score[2] = rank[i];

            if_same[2] = rank_same[i];            
            
            medal[2] = num[i];
        }
    }
    for(int i : medal) cout << i << " ";
}