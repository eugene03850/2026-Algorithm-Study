#include <iostream>
using namespace std;

bool isValid(int a, int b, int c){
    return (a+b)>c && (b+c)>a && (a+c)>b;
}


int main() {
    int a,b,c;
    
    
    while(true){
        cin>>a>>b>>c;
        if(a==0&&b==0&&c==0){
            break;
        }

        if(!isValid(a,b,c)){
            
            cout<<"Invalid\n";
        }

        else if(a==b&&b==c){
            cout<<"Equilateral\n";
        }
        else if(a==b||b==c||a==c){
            cout<<"Isosceles\n";
        }
        else{
            cout<<"Scalene\n";
        }
    }


    return 0;
}

//5073 삼각형과 세 변