#include <string>
#include <vector>
#include <iostream>
#include <queue>
using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    priority_queue<int> max_pq;
    priority_queue<int,vector<int>,greater<int>> min_pq;
    
    for(int i = 0;i<operations.size();i++){
        char check = operations[i][0];
        cout << check << ' ';
        string s = operations[i].substr(2);
        if(check == 'I'){
            max_pq.push(stoi(s));
            min_pq.push(stoi(s));
        }
        else if(check == 'D' && s[0] == '-'){
            if(min_pq.empty()){
                continue;
            }
            if(min_pq.top() == max_pq.top()) max_pq.pop();
            min_pq.pop();
        }
        else if(check == 'D' && stoi(s)){
            if(max_pq.empty()){
                continue;
            }
            if(min_pq.top() == max_pq.top()) min_pq.pop();
            max_pq.pop();
        }
        if(min_pq.top() > max_pq.top()){
            while(!min_pq.empty()) min_pq.pop();
            while(!max_pq.empty()) max_pq.pop();
        }
    }
    if(min_pq.empty()){
        answer.push_back(0);
        answer.push_back(0);
    }
    else{
        answer.push_back(max_pq.top());
        answer.push_back(min_pq.top());
    }
    return answer;
}