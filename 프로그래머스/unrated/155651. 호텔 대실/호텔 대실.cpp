#include <string>
#include <vector>
#include <iostream>
#include<algorithm>
#include <queue>
using namespace std;

int solution(vector<vector<string>> book_time) {
    int answer = 0;
    priority_queue<int,vector<int>,greater<int>> timetable;
    vector<pair<int,int>> change_int;
    for(int i = 0;i<book_time.size();i++){
        int in_hour = stoi(book_time[i][0].substr(0,2));
        int in_minute = stoi(book_time[i][0].substr(3,2));
        int out_hour = stoi(book_time[i][1].substr(0,2));
        int out_minute = stoi(book_time[i][1].substr(3,2));
        change_int.push_back({60 * in_hour + in_minute,60 * out_hour + out_minute});
    }
    sort(change_int.begin(),change_int.end());
    timetable.push(change_int[0].second + 10);
    for(int i = 1;i<change_int.size();i++){
        if(timetable.top() <= change_int[i].first){
            timetable.push(change_int[i].second + 10);
            timetable.pop();
        }
        else{
            timetable.push(change_int[i].second + 10);
        }
    }
    return timetable.size();
}