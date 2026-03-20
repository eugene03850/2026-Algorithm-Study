#include <iostream>
#include <vector>
#include <queue>
using namespace std;
typedef pair<int,int> pint;

int move(vector<vector<char>>& v, int drow, int dcol, int n, int m){
    vector<vector<bool>> visited(n, vector<bool>(m,false));
    int cnt=0;

    queue<pint> q;
    q.push({drow,dcol});
    visited[drow][dcol]=true;

    while(!q.empty()){
        pint cur = q.front();
        
        q.pop();

        if(v[cur.first][cur.second]=='P'){
            cnt++;
            v[cur.first][cur.second]='O';
            //cout<<cur.first<<", "<<cur.second<<endl;
            
        }


        if((cur.first-1>=0)&&(visited[cur.first-1][cur.second]==false)&&v[cur.first-1][cur.second]!='X'){ //up
            q.push({cur.first-1,cur.second});
            visited[cur.first-1][cur.second]=true;   
        }
        if((cur.first+1<n)&&(visited[cur.first+1][cur.second]==false)&&v[cur.first+1][cur.second]!='X'){ //down
            q.push({cur.first+1,cur.second});    
            visited[cur.first+1][cur.second]=true; 
        }
        if((cur.second-1>=0)&&(visited[cur.first][cur.second-1]==false)&&v[cur.first][cur.second-1]!='X'){ //left
            q.push({cur.first,cur.second-1});    
            visited[cur.first][cur.second-1]=true;
        }
        if((cur.second+1<m)&&(visited[cur.first][cur.second+1]==false)&&v[cur.first][cur.second+1]!='X'){ //right
            q.push({cur.first,cur.second+1});    
            visited[cur.first][cur.second+1]=true;
        }
    }
    return cnt;

}


int main() {
    int n,m;
    cin>>n>>m;

    vector<vector<char>> v(n, vector<char>(m,'O'));
    int drow=0, dcol=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>v[i][j];
            if(v[i][j]=='I'){
                drow=i;
                dcol=j;
            }
        }
    }

    int sum = move(v,drow,dcol,n,m);
    if(sum==0) cout<<"TT";
    else cout<<sum;

    return 0;
}