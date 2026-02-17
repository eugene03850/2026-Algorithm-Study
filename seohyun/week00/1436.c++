#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int n, now, death = 666;
    vector<int> end;
    cin >> n;

    for(int i = 0; i < 10; i++){
        end.push_back(death*10 + i);
        end.push_back(death + i*1000);
    }
    for(int i = 1; i < 100; i++){
        end.push_back(death + i*10000);
        for(int j = 0; j < 10; j++){
            end.push_back(death + i*10000 + j*1000);
        }
    }
    for(int i = 1; i < 100; i++){
        end.push_back(death + i*100000);
        for(int j = 0; j < 100; j++){
            end.push_back(death + i*100000 + j*1000);
        }
    }
    now = end.size();
    for(int i = 0; i < now; i++){
        for(int j = 0; j < 10; j++){
            long long buff;
            buff = end[i];
            if(buff > 10000000) break;            
            end.push_back(buff*10 + j);

        }
    }


    now = end.size();
    for(int i = 0; i < now; i++){
        for(int j = 0; j < 10; j++){
            long long buff;
            buff = end[i];
            if(buff > 10000000) break;
            end.push_back(buff*10 + j);
        }
    }

    now = end.size();
    for(int i = 0; i < now; i++){
        for(int j = 0; j < 10; j++){
            long long buff;
            buff = end[i];
            if(buff > 10000000) break;
            end.push_back(buff*10 + j);
        }
    }    
    

    sort(end.begin(), end.end());
    auto last = unique(end.begin(), end.end());
    end.erase(last, end.end());
    long long ans;
    ans = end[n-1];
    cout << ans;
    //end.resize(10000);
    //for(int i : end) cout << i<< " ";
    //cout << end.size();

}
