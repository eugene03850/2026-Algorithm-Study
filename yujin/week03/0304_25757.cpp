#include <iostream>
#include <set>
#include <string>

using namespace std;


int main() {
    int n;
    char game;
    string name;  

    int player_req=0;

    cin>>n>>game;
    set<string> players;    

    for(int i=0; i<n; i++){
        cin>>name;
        players.insert(name);
    }

    switch(game){
        case 'Y':
            player_req=1;
            break;
        case 'F':
            player_req=2;
            break;
        case 'O':
            player_req=3;
            break;
    }

    cout<<players.size()/player_req;


    return 0;
}