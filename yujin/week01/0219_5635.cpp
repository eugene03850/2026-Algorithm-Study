#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

struct Student{
    string name;
    int day;
    int month;
    int year;
};

int compare(const Student& a, const Student& b){
    if (a.year != b.year)
        return a.year < b.year;

    if (a.month != b.month)
        return a.month < b.month;

    return a.day < b.day;
}


int main() {
    int n;
    cin>>n;

    vector<Student> vStu(n);

    for(int i=0; i<n; i++){
        cin>>vStu[i].name>>vStu[i].day>>vStu[i].month>>vStu[i].year;
    }

    sort(vStu.begin(), vStu.end(), compare);

    cout<<vStu.back().name<<"\n"<<vStu.front().name;

    return 0;
}

