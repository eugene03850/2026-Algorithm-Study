#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int compare(vector<int> s){
    if(s.size() != 4) return 0;

    int counter = 0;
    bool checker = true;
    vector<int> buf(4), buf2 = s;
    
    for(int i = 0; i < 4; i++){
        if(buf2[0] != buf2[i]) checker = false;
    }    

    while(!checker){
        buf[0] = max(buf2[0] - buf2[1], buf2[1] - buf2[0]);
        buf[1] = max(buf2[1] - buf2[2], buf2[2] - buf2[1]);
        buf[2] = max(buf2[2] - buf2[3], buf2[3] - buf2[2]);
        buf[3] = max(buf2[3] - buf2[0], buf2[0] - buf2[3]);
        
        checker = true;
        buf2 = buf;
        for(int i = 0; i < 4; i++){
            if(buf2[0] != buf2[i]) checker = false;
        }
        counter++;
        
    }
    
    return counter;
}

int main(){
    int counter = 0;
    vector<int> converge(4);
    copy_n(istream_iterator<int>(cin), 4, converge.begin());

    while(!(converge[0] == 0 && converge[1] == 0 && converge[2] == 0 && converge[3] == 0)){
        int ans = compare(converge);
        cout << ans << "\n";
        copy_n(istream_iterator<int>(cin), 4, converge.begin());
    }
}