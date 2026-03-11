#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n; //스위치 개수
    int students; //학생 수
    int gender, switch_num;

    cin>>n;
    vector<int> switches(n+1);    

    for(int i=1; i<=n; i++){
        cin>>switches[i];
    }
    
    cin>>students;

    for(int i=0; i<students; i++){
        cin>>gender>>switch_num;
        if(gender==1){
            for(int j=switch_num; j<=n; j+=switch_num){
                switches[j]^=1;
            }
        }
        else { 
            switches[switch_num]^=1;
            int index=1;
            while(switch_num-index>=1 && switch_num+index<=n){
                if(switches[switch_num-index]==switches[switch_num+index]){
                    switches[switch_num-index]^=1;
                    switches[switch_num+index]^=1;
                }
                else{
                    break;
                }
                index++;
            }
        }
    }

    for(int i=1; i<=n; i++){
        cout<<switches[i]<<" ";
        if(i%20==0){
            cout<<'\n';
        }
    }

    return 0;
}

