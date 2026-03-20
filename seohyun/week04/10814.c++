#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Membership
{
    int old;
    int when;
    string name;
};

bool compare(struct Membership &a, struct Membership &b){
    if(a.old != b.old){
        return a.old < b.old;
    }
    else{
        return a.when < b.when;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    vector<Membership> member(n);    
    
    for(int i = 0; i < n; i++){
        cin >> member[i].old >> member[i].name;
        member[i].when = i;
    }

    sort(member.begin(), member.end(), compare);

    for(auto const &c : member){
        cout << c.old << " " << c.name << "\n";
    }
}