#include <iostream>
#include <vector>
using namespace std;

int main(){
    string change;
    getline(cin, change);

    for(int i = 0 ; i < change.size(); i++){
        int what = change[i];
        if((what >= 'A' && what < 'N' )|| (what >= 'a' && what < 'n')){
            change[i] += 13;
        }
        else if ((what > 'M' && what <= 'Z') || (what > 'm' && what <= 'z')){
            //int sub = what - 48 - 13;
            change[i] -= 13; 
        }
    }
    cout << change;
}
