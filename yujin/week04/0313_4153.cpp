#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    vector<int> length(3);
    
    while(true){
        for(int i=0; i<3; i++){
            cin>>length[i];
        }

        if(length[0]+length[1]+length[2]==0){
            break;
        }

        sort(length.begin(), length.end());

        if(length[0]*length[0]+length[1]*length[1]==length[2]*length[2]){
            cout<<"right\n";
        }
        else{
            cout<<"wrong\n";
        }
    }

    return 0;
}
//직각삼각형