#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

// struct Notfame {
//     string name;
//     bool not_heard = false;
//     bool not_seen = false;
// };

// bool compare(struct Notfame &a, struct Notfame &b){
//     return a.name < b.name;
// }

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
    // vector<Notfame> people(n);
    // for(int i = 0; i < n; i++){
    //     string who;
    //     cin >> who;
    //     people[i].name = who;
    //     people[i].not_heard = true;
    // }

    // for(int i = 0; i < m; i++){
    //     string who;
    //     cin >> who;
    //     auto npos = find_if(people.begin(), people.end(), who);
    //     if(people.end() != npos){
    //         npos->not_seen = true;    
    //     }
    // for(int j = 0; j < n; j++){
    //     if(people[j].name == who){
    //         people[j].not_seen = true;
    //         counter++;
    //     }
    // }
    // }
    // cout << counter << "\n";
    // sort(people.begin(), people.end(), compare);

    // for(int i = 0; i < people.size(); i++){
    //     if(people[i].not_heard && people[i].not_seen) cout << people[i].name << "\n";
    // }
}