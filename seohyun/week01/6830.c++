#include <iostream>
using namespace std;

int main(){
    int temp, lowest = 200;
    string city;
    string low_city;

    while(cin >> city){
        cin >> temp;
        if(temp < lowest){
            lowest = temp;
            low_city = city;
        }
        if(city == "Waterloo"){
            break;
        }
    }
    cout << low_city;
}