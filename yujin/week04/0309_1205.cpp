#include <iostream>
#include <vector>

using namespace std;


int main() {
    int n, ts_score, p;
    cin>>n>>ts_score>>p;

    vector<int> scores(p,-1);
    int rank=1;

    for(int i=0; i<n; i++){
        cin>>scores[i];
    }

    if(n==0){
        cout<<1;
        return 0; //n==0일 경우 1등 출력하고 종료
    }


    else if(n == p && scores[p-1]>=ts_score){
        cout<<-1;
        return 0;
    } //랭킹이 꽉 차있고(n==p) 꼴등 스코어보다 태수 점수가 낮으면 진입 불가(-1 출력)

    for(int i=0; i<n; i++){
        if(scores[i]>ts_score){
            rank++;
        }
        else{
            break;
        }
    }
    
    
    cout<<rank;


    return 0;
}