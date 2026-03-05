#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Cordinate
{
    int x;
    int y;
};

bool compare(Cordinate a, Cordinate b){
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
