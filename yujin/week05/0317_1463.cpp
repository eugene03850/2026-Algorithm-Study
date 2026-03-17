#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> minWorms(vector<vector<int>>& v, int x, int y, int width, int height){
    queue<pair<int,int>> q;

    q.push(make_pair(x,y));
    v[x][y]=0;

    while(!q.empty()){
        pair<int,int> tmp = q.front();
        q.pop();
        //cout<<tmp.first<<", "<<tmp.second<<endl;

        if(tmp.first+1<height && v[tmp.first+1][tmp.second]==1){
            q.push(make_pair(tmp.first+1, tmp.second));
            v[tmp.first+1][tmp.second]=0;

        }
        if(tmp.second+1<width && v[tmp.first][tmp.second+1]==1){
            q.push(make_pair(tmp.first, tmp.second+1));
            v[tmp.first][tmp.second+1]=0;

        }
        if(tmp.first-1>=0 && v[tmp.first-1][tmp.second]==1){
            q.push(make_pair(tmp.first-1, tmp.second));
            v[tmp.first-1][tmp.second]=0;

        }
        if(tmp.second-1>=0 && v[tmp.first][tmp.second-1]==1){
            q.push(make_pair(tmp.first, tmp.second-1));
            v[tmp.first][tmp.second-1]=0;

        }
    }
    return v;
}
    

int main() {
    int tc;
    cin>>tc;

    for(int i=0; i<tc; i++){
        int width,height,cabbage;
        cin>>width>>height>>cabbage;

        vector<vector<int>> v(height, vector<int>(width,0));

        for(int j=0; j<cabbage; j++){
            int x,y;
            cin>>y>>x;

            v[x][y]=1;
        }

        int sum=0;

        for(int j=0; j<height; j++){
            for(int k=0; k<width; k++){
                if(v[j][k]==1){
                    //cout<<j<<", "<<k<<'\n';
                    v=minWorms(v, j,k,width,height);
                    sum++;
                }
            }
        }
        cout<<sum<<'\n';
    }


    return 0;
}// 유기농 배추