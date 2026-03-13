#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, counter = 0, many, maximum = 0;
    cin >> n;
    vector<int> dish(n);
    copy_n(istream_iterator<int>(cin), n, dish.begin());
    sort(dish.begin(), dish.end());
    
    for(int i = 1; i < n; i++){
        if(dish[i] == dish[i-1]){
            counter++;
        }
        else{
            maximum = max(maximum, counter);
            counter = 0;
        }
    }
    maximum = max(maximum, counter);
    cout << maximum + 1;
}