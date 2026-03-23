#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    
    int r,g,b;
    cin>>r>>g>>b;

    int result = r/3+g/3+b/3;
    r%=3; g%=3; b%=3;

    while(r&&g&&b){
        result++;
        r--; g--; b--;
    }
    while(r&&g){
        result++;
        r--; g--;
    }
    while(r&&b){
        result++;
        r--; b--;
    }
    while(b&&g){
        result++;
        b--; g--;
    }

    if(r) result++;
    if(g) result++;
    if(b) result++;

    cout<<result;
    
    return 0;
}