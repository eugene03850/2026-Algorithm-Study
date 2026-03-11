#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findWinner(int n, const vector<int>& v){
    vector<int> team_mem(201);

    for(int i=0; i<n; i++){
        team_mem[v[i]]++;
    }

    for(int i=1; i<team_mem.size(); i++){
        if(team_mem[i]<6){
            team_mem[i]=0;
        }
    }

    vector<int> teamscore(201);
    vector<int> fifthscore(201);
    vector<int> mem_count(201);
    int rank=1;
    
    for(int i=0; i<n; i++){
        if(team_mem[v[i]]>0){
            mem_count[v[i]]++;
            if(mem_count[v[i]]==5){
                fifthscore[v[i]]=rank;

            }
            else if(mem_count[v[i]]<5){                
                teamscore[v[i]]+=rank;
            }
            rank++; // 팀의 몇번째 선수인지와 상관없이, 자격이 있는 팀의 선수라면 무조건 등수를 카운트
        }
    }

    int winner = -1;

    for(int i=1; i<teamscore.size(); i++){
        if(team_mem[i] > 0){
            winner = i;
            break;
        }
    }

    for(int i=1; i<teamscore.size(); i++){

        if((team_mem[i] > 0)&&teamscore[winner]>teamscore[i]){
            winner=i;
        }
        else if((team_mem[i] > 0)&&teamscore[winner]==teamscore[i] && fifthscore[winner]>fifthscore[i]){
            winner = i;
        }
    }

    return winner;
    
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        vector<int> team(n);

        for(int j=0; j<n; j++){
            cin>>team[j];
        }
        cout<<findWinner(n, team)<<'\n';

    }


    return 0;
}