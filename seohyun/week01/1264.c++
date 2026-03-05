#include <iostream>
#include <string>
using namespace std;

int main(){
    string line;
    while(getline(cin, line) && line != "#"){
        int num = 0;
        for (int i = 0; i < line.size(); i++){
            if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u'){
                num++;
            }
            if (line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || line[i] == 'O' || line[i] == 'U'){
                num++;
            }    
        }
        cout << num << "\n";       
    }
}