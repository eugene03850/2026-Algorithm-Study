#include <iostream>
#include <string>
using namespace std;

int main(){
    string what;
    getline(cin, what);
    bool str = false, getout = false;
    int n = what.size();

    if(what[0] == '"' && what[n-1] == '"' && n != 1){
        what.erase(what.end()-1);
        what.erase(what.begin());
        getout = true;
    }

    for(char n : what){
        if(n != ' ') str = true;
    }

    if(str && getout) cout << what;
    else cout << "CE";
}