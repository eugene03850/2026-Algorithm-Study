#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> bfs(vector<vector<int>>& edge, int n, int start, vector<int>& connected){
    queue<int> q;

    q.push(start);
    connected[start]=1;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(int i=1; i<=n; i++){
            if(edge[node][i]==1&&connected[i]==0){
                connected[i]=1;
                q.push(i);
            }
        }
    }
    
     
    return connected;
}


int main() {
    int n, m;
    cin>>n>>m;

    vector<vector<int>> edge(n + 1, vector<int>(n + 1, 0));

    for(int i=0; i<m; i++){
        int a, b;
        cin>>a>>b;

        edge[a][b]=1;
        edge[b][a]=1;
    }

    vector<int> connected(n+1,0);
    int result=0;
    
    for(int i=1; i<=n; i++){
        if(connected[i]==0){
            connected = bfs(edge,n,i,connected);
            result++;
        }
    }
    cout<<result;




    return 0;
}