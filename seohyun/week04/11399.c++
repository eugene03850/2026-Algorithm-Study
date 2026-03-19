#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, total = 0;
    cin >> n;
    vector<int> time(n);
    copy_n(istream_iterator<int>(cin), n, time.begin());

    sort(time.begin(), time.end());
    for(int i = 0; i < n; i++){
        total += time[i]*(time.size() - i);     // (전체-n)만큼의 사람이 n 시간을 동일하게 기다리게됨
    }
    cout << total;
    return 0;
}