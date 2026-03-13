#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isPrime(int sum){
    for(int i=2; i*i<=sum; i++){
        if(sum%i==0){
            return false;
        }
    }
    return true;
}


int main() {
    string str;
    cin>>str;

    int sum=0;

    for(int i=0; i<str.length(); i++){
        char ch = (int)str[i];
        if(ch<91){
            sum+=(int)ch-38;
        }
        else{
            sum+=(int)ch-96;
        }
    }


    if(sum==1||isPrime(sum)){
        cout<<"It is a prime word.";
    }
    else{
        cout<<"It is not a prime word.";
    }
    

    return 0;
}

//소수 단어