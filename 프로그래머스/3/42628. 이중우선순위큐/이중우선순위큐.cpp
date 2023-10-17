#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <deque>
using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    deque<int> dq;
    for(int i = 0;i<operations.size();i++){
        char check = operations[i][0];
        string s = operations[i].substr(2);
        if(check == 'I'){
            dq.push_back(stoi(s));
            sort(dq.begin(),dq.end());
        }
        else if(check == 'D' && s[0] == '-'){
            if(dq.size() == 0) continue;
            dq.pop_front();
        }
        else if(check == 'D' && stoi(s)){
            if(dq.size() == 0) continue;
            dq.pop_back();
        }
    }
    if(dq.size() == 0){
        answer.push_back(0);
        answer.push_back(0);
    }
    else{
        answer.push_back(dq.back());
        answer.push_back(dq.front());
    }
    return answer;
}