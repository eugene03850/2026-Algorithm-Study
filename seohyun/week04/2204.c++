#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

struct Word
{
    string real;
    string small;
};

bool compare(const Word &a, const Word &b){
    return a.small < b.small;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    while(cin >> n && n != 0){
        string max;
        vector<Word> words(n);
        for(int i = 0; i < n; i++){
            string change;
            cin >> change;
            words[i].real = change;            
            for_each(change.begin(), change.end(), [](auto & c){c = tolower(c);});
            words[i].small = change;
        }
        sort(words.begin(), words.end(), compare);
        cout << words[0].real << "\n";
    }
}