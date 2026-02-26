#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int gap1, gap2, ans;
    vector<int> seq(3);
    cin >> seq[0] >> seq[1] >> seq[2];

    sort(seq.begin(), seq.end());
    gap1 = seq[1] - seq[0];
    gap2 = seq[2] - seq[1];
    
    if(gap1 == gap2) cout << seq[2] + gap2;
    else if(gap1 > gap2) cout << seq[0] + gap2;
    else cout << seq[1] + gap1;
}