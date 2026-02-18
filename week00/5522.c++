#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){
    int a[5], result;
    copy_n(istream_iterator<int>(cin), 5, a);
    result = a[0] + a[1] + a[2] + a[3] + a[4];
    cout << result;
}