#include <iostream>
#include <vector>
using namespace std;


int main() {
    int score;
    int sum=0;
    vector<int> v = {100,100,200,200,300,300,400,400,500};
    for(int i=0; i<9; i++){
        cin>>score;
        if(score>v[i]){
            cout<<"hacker";
            return 0;
        }
        else{
            sum+=score;
            cout<<score<<endl;
        }
    }
    if(sum>=100) cout<<"draw";
    else cout<<"none";

    return 0;
}//추첨을 통해 커피를 받자