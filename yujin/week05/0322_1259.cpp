#include <iostream>
#include <string>
#include <stack>
using namespace std;

string isPal(const string& str){
    bool is_pal=true;
    int size = str.size();
    stack<char> st;

    for(int i=0; i<size/2; i++){
        st.push(str[i]);
        //cout<<"push "<<str[i]<<endl;
        
    }

    for(int i=(size+1)/2; i<size; i++){
        if(str[i]==st.top()){
            st.pop();
            //cout<<"pop "<<str[i]<<endl;
        }
        else{
            is_pal=false;
            //cout<<3<<endl;
            break;
        }
    }
    if(is_pal) return "yes";
    else return "no";
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string str;
    while (cin >> str) { 
        if (str == "0") break;
        cout << isPal(str) << '\n';
    }




    return 0;
}