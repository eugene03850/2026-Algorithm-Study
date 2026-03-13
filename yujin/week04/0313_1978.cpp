#include <iostream>
#include <vector>
using namespace std;

vector<bool> findPrime(){ //true면 소수
    vector<bool> result(1001, true);

    result[0]=false;
    result[1]=false;
    
    for(int i=2; i*i<result.size(); i++){
        if(result[i]==true){
            for(int j=2; i*j<result.size(); j++){
                result[i*j]=false;
            }
        }
    }


    return result;
}


int main() {
    int n;
    cin>>n;

    vector<bool> prime=findPrime();
    int sum=0;


    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        if(prime[num]==true){
            sum++;
        }
    }

    cout<<sum;

    return 0;
}