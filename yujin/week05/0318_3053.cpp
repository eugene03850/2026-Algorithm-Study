#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int r;
    cin>>r;

    double d = (double)r;
    
    cout << fixed;
    cout.precision(6);
    cout<<d*d*M_PI<<endl;
    cout<<d*d*2.000000;


    return 0;
}//택시 기하학