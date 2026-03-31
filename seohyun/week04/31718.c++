#include <iostream>
#include <unordered_map>        // 정렬할 필요가 없음
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m, ans = 0;
    cin >> n;
    unordered_map<int, int> how_many;

    for(int i = 0; i < n ; i++){
        cin >> m;
        while(m % 2 == 0){
            m /= 2;
        }
        how_many[m]++;          // map은 자동 선언되므로 존재 확인 조건문 필요x

        ans = max(ans, how_many[m]);    // 최대값만 찾으면 되므로 갱신될때마다 바로 확인
    }
    cout << ans;
}