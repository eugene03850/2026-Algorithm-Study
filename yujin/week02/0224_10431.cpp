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
        if(inserted==false){
                sorted.push_back(students[i]);
        }
    }
    


    return cnt;
}


int main() {

    int p,t,height;

    cin>>p;

    vector<vector<int>> students(p);

    for(int j=0; j<p; j++){
        cin>>t;
        for(int i=0; i<20; i++){
            cin>>height;
            students[j].push_back(height);                    
        }
        cout<<t<<" "<<sortheight(students[j])<<'\n';
    }

    return 0;
}