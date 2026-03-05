#include <iostream>
#include <vector>
using namespace std;

int sortheight(const vector<int>& students){
    int cnt=0;
    
    vector<int> sorted;

    sorted.push_back(students[0]);

    for(int i=1; i<students.size(); i++){
        bool inserted=false;
        for(int j=0; j<sorted.size(); j++){
            if(sorted[j]>students[i]){
                cnt+=(sorted.size()-j);
                sorted.insert(sorted.begin()+j, students[i]);
                
                inserted=true;
                break;
            }
            
        }
        if(!inserted){
                sorted.push_back(students[i]);
        }
    }
    


    return cnt;
}


int main() {

    int p,t;

    cin>>p;

    for(int j=0; j<p; j++){
        vector<int> students(20);
        cin>>t;
        for(int i=0; i<20; i++){
            cin>>students[i];                
        }
        cout<<t<<" "<<sortheight(students)<<'\n';
    }

    return 0;
}