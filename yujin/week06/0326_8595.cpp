#include <iostream>
#include <string>
#include <cctype>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int len;
    string str;
    cin>>len>>str;

    long long sum=0;
    
    string hidden="";
    for(int i=0; i<len; i++){
        if(isdigit(str[i])){
            hidden+=str[i];
        }
        else if(!isdigit(str[i])&&hidden!=""){
            sum+=stoi(hidden);
            hidden="";
        }
    }
    if(hidden!="")sum+=stoi(hidden);
    
    cout<<sum;

    return 0;
}//히든 넘버