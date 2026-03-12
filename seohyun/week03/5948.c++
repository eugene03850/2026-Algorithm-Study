#include <iostream>
#include <vector>
using namespace std;

struct number
{
    int Num;
    int Middle;
    int Square;
};

int main(){
    int n, mid;
    cin >> n;
    vector<number> pigeons;

    mid = (n - ((n/1000)*1000))/10;
    pigeons.push_back({n, mid, mid*mid});
    int ans = 1;

    while(pigeons[pigeons.size()-1].Num != 0){
        if(pigeons[0].Square == pigeons[pigeons.size()-1].Square && pigeons.size() != 1){
            break;
        }
        else if(pigeons[pigeons.size()-1].Square == pigeons[pigeons.size()-1].Num){
            break;
        }

        ans++;
        int n = pigeons[pigeons.size()-1].Square;
        int mid = (n - ((n/1000)*1000))/10;
        pigeons.push_back({n, mid, mid*mid});

    }
    cout << ans;
}