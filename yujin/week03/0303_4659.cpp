#include <iostream>
#include <string>

using namespace std;

bool isVowel(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        return true;
    }
    else{
        return false;
    }
}

bool pwCheck(const string& str){    
    int cnt_vowel=0;
    int cnt_conso=0;
    int len = str.length();
    
    bool cur_is_vowel=false;
    bool has_vowel=false;
    

    for(int i=0; i<len; i++){
        bool cur_is_vowel = isVowel(str[i]);


        if((str[i]==str[i-1])&&(str[i]!='e'&&str[i]!='o')){
            return false;
        }

        if(cur_is_vowel==true){
            has_vowel=true;
            cnt_vowel++;
            cnt_conso=0;
        }
        else{
            cnt_vowel=0;
            cnt_conso++;
        }



        
        if(cnt_vowel>=3 || cnt_conso>=3){
            return false;
        }


    }

    if(has_vowel==false){
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