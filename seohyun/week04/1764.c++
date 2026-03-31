#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, counter = 0;
    cin >> n >> m;
    string who;
    map<string, bool> people;

    for(int i = 0; i < n; i++){

        cin >> who;
        people[who] = false;
    }
    for(int i = 0; i < m; i++){
        cin >> who;
        if(people.count(who) > 0){
            people[who] = true;
            counter++;
        }
    }
    cout << counter << "\n";

    for(auto const &pair : people){
        if(pair.second == true){
            cout << pair.first << "\n";
        }
    }
}