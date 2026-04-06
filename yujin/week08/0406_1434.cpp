#include <iostream>
#include <queue>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n,m;
    cin>>n>>m;

    queue<int> q;
    for(int i=0; i<n; i++){
        int c;
        cin>>c;
        q.push(c);
    }
    int result=0;
    for(int i=0; i<m; i++){
        int book;
        cin>>book;

        while(book>q.front()){
            result+=q.front();
            q.pop();
        }
        if(book==q.front()){
            q.pop();
        }
        else if(book<q.front()){
            q.front()-=book;
        }
    }

    while(!q.empty()){
        result+=q.front();
        q.pop();
    }

    cout<<result;
    return 0;
}