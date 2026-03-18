#include <iostream>
#include <queue>
using namespace std;


int main() {
    int n;
    cin>>n;

    priority_queue<double, vector<double>, greater<double>> pq;

    for(int i=0; i<n; i++){
        double grade;
        cin>>grade;

        pq.push(grade);
    }

    cout << fixed;
    cout.precision(3);

    for(int i=0; i<7; i++){
        cout<<pq.top()<<'\n';
        pq.pop();
    }


    return 0;
}