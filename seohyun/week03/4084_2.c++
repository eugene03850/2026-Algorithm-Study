#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int counter = 0;
    int a, b, c, d;
    
    while(cin >> a >> b >> c >> d && !(a == 0 && b == 0 && c == 0 && d == 0)){
        int counter = 0;
        while(!(a == b && b == c && c == d)){
            int buf_a = abs(a - b);
            int buf_b = abs(b - c);
            int buf_c = abs(c - d);
            int buf_d = abs(d - a);

            a = buf_a;
            b = buf_b;
            c = buf_c;
            d = buf_d;

            counter++;
        }
        cout << counter << "\n";
    }
}