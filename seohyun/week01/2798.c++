#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

int main(){
    int n, jack, except, now, ans = -1;
    cin >> n >> jack;

    vector<int> nums(n);
    copy_n(istream_iterator<int>(cin), n, nums.begin());

    for(int i = 0; i < n-2; i++){
        for(int j = i + 1; j < n; j++){
            for(int k = j + 1; k < n; k++){
                now = nums[i] + nums[j] + nums[k];
                if (now <= jack && ans < now) {
                    ans = now;
                    cout << ans << " ";
                }
            }
        }
    }
}