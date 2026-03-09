#include <iostream>
#include <string>
#include <vector>

using namespace std;

void measureCookie(const vector<string>& v){
    int n = v.size();
    int width = v[0].size();
    int heart_x=0, heart_y=0;
    int l_arm = 0, r_arm = 0, waist = 0, l_leg = 0, r_leg = 0, leg_y = 0;

    bool found = false;

    for(int i=0; i<n; i++){
        for(int j=0; j<width; j++){
            if(v[i][j]=='*'){
                heart_x=j;
                heart_y=i+1;
                found = true;                
                break;
            }
        }
        if(found) break;
    }

    l_arm = heart_x-v[heart_y].find('*');
    r_arm = v[heart_y].rfind('*')-heart_x;

    int i = heart_y + 1;
    while(i < n && v[i][heart_x] == '*') {
        waist++;
        i++;
    }
    leg_y = i;

    for(int i=leg_y; i<n; i++){
        if(v[i][heart_x-1]=='*'){
            l_leg++;
        }
        if(v[i][heart_x+1]=='*'){
            r_leg++;
        }
    }

    

    cout<<heart_y+1<<" "<<heart_x+1<<'\n';
    cout<<l_arm<<" "<<r_arm<<" "<<waist<<" "<<l_leg<<" "<<r_leg;

    
}


int main() {
    int n;
    string str="";

    cin>>n;
    vector<string> line;

    for(int i=0; i<n; i++){
        cin>>str;
        line.push_back(str);
    }

    measureCookie(line);    

    return 0;
}