#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool pwCheck(const string& str){
    
    int cnt_vowel=1;
    int cnt_conso=1;

    int len = str.length();
    vector<bool> vowels(len, false);    
    
    bool is_vowel=false;

    if(str[0]=='a'||str[0]=='e'||str[0]=='i'||str[0]=='o'||str[0]=='u'){
        vowels[0]=true;
        is_vowel=true;
    }

    
    for(int i=1; i<len; i++){
        if((str[i]==str[i-1])&&(str[i]!='e'&&str[i]!='o')){
            return false;
        }

        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            vowels[i]=true;
            is_vowel=true;
        }

        if(vowels[i]==false&&vowels[i-1]==false){
            cnt_conso++;
        }
        else if(vowels[i]==true&&vowels[i-1]==false){
            cnt_conso=0;
            cnt_vowel=1;
        }     
        else if(vowels[i]==false&&vowels[i-1]==true){
            cnt_conso=1;
            cnt_vowel=0;
        }
        else{
            cnt_vowel++;
        } 
        
        if(cnt_vowel==3 || cnt_conso==3){ return false; }


    }

    if(is_vowel==false){
        return false;
    }

    return true;

}


int main() {
    string str;
    

    while(true){
        bool is_valid=false;
        cin>>str;
        if(str=="end"){
            break;
        }

        is_valid = pwCheck(str);

        if(is_valid==true){
            cout<<"<"<<str<<"> is acceptable.\n";
        }
        else{
            cout<<"<"<<str<<"> is not acceptable.\n";

        }
        
    }


    return 0;
}