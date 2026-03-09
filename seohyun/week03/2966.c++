#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct student
{
    int score = 0;
    string name;
    string howto;
};

int main(){
    int n;
    string ans;
    vector<student> test(3);

    cin >> n >> ans;

    test[0].name = "Adrian";
    test[1].name = "Bruno";
    test[2].name = "Goran";

    test[0].howto = "ABC";
    test[1].howto = "BABC";
    test[2].howto = "CCAABB";

    for(int i = 0; i < n; i++){
        if(ans[i] == test[0].howto[i%3]) test[0].score += 1;
        if(ans[i] == test[1].howto[i%4]) test[1].score += 1;
        if(ans[i] == test[2].howto[i%6]) test[2].score += 1;
    }

    int who = 0;
    for(int i = 0; i < 3; i++){
        who = max(who, test[i].score);
    }
    cout << who;

    for(int i = 0; i < 3; i++){
        if(test[i].score == who) cout << "\n" << test[i].name;
    }
    
    return 0;
}