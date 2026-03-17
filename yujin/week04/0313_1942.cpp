#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct ClockInt{
    int hour;
    int min;
    int sec;
};

ClockInt strToClockInt(string str){
    ClockInt result;

    result.hour = stoi(str.substr(0,2));
    result.min = stoi(str.substr(3,2));
    result.sec = stoi(str.substr(6,2));

    return result;
}

int setDigit(ClockInt c){
    return c.hour*10000+c.min*100+c.sec;
}

int findMultipleOfThree(ClockInt start, ClockInt end){
    int result=0;
    int end_i = setDigit(end);
    

    while(true){        
        int start_i = setDigit(start);
        
        if(start_i%3==0){
            result++;
        }

        if(start_i==end_i) break;

        start.sec++;

        if(start.sec==60){
            start.sec=0;
            start.min+=1;
        }
        if(start.min==60){
            start.min=0;
            start.hour+=1;
        }
        if(start.hour==24){
            start.hour=0;
        }
    }

    return result;
}

int main() {
    string str1, str2;
    ClockInt start, end;

    for(int i=0; i<3; i++){
        cin>>str1>>str2;

        start = strToClockInt(str1);
        end = strToClockInt(str2);
        
        cout<<findMultipleOfThree(start, end)<<'\n';

    }


    return 0;
}