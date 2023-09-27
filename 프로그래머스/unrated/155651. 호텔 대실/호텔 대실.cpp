#include <string>
#include <vector>
#include <iostream>
#include<algorithm>
#include <queue>
using namespace std;

int solution(vector<vector<string>> book_time) {
    int answer = 0;
    priority_queue<int,vector<int>,greater<int>> timetable;
    sort(book_time.begin(),book_time.end());
    
    for(int i = 0;i<book_time.size();i++){
        int in_hour = stoi(book_time[i][0].substr(0,2));
        int in_minute = stoi(book_time[i][0].substr(3,2));
        int out_hour = stoi(book_time[i][1].substr(0,2));
        int out_minute = stoi(book_time[i][1].substr(3,2));
        while(!timetable.empty() && timetable.top() <= 60 * in_hour + in_minute){
            timetable.pop();
        }
        timetable.push(out_hour * 60 + out_minute+10);
        answer = max(answer, (int)timetable.size());
    }
    return answer;
}