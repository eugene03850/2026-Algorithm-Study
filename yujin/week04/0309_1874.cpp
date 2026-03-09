#include <iostream>
#include <vector>
#include <stack>
using namespace std;


int main() {
    int n;
    cin>>n;

    vector<int> v(n);
    vector<char> result;
    stack<int> st;

    st.push(0);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    int index=0;

    for(int i=1; i<=n; i++){
        st.push(i);
        result.push_back('+');
        
        while(index<n&&st.top()==v[index]){
            result.push_back('-');
            st.pop();
            index++;
        }

    }

    if(st.top()!=0){
        cout<<"NO";
    }

    else{
        for(int i=0; i<result.size(); i++){
            cout<<result[i]<<'\n';
        }
    }
    return 0;
}