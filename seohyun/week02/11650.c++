#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Cordinate
{
    int x;
    int y;
};

bool compare(Cordinate& a, Cordinate& b){       //& << 읽기전용, 수정 필요 없을때 사용하면 속도 감소 + 데이터 안전 증가
    if(a.x != b.x){
        return a.x < b.x;
    }
    return a.y < b.y;
}

int main(){
    int n;
    cin >> n;
    vector<Cordinate> cord(n);
    
    for(int i = 0; i < n; i++){
        cin >> cord[i].x >> cord[i].y;
    }

    sort(cord.begin(), cord.end(), compare);

    for(int i = 0; i < n; i++){
        cout << cord[i].x << " " << cord[i].y << "\n";
    }
}
