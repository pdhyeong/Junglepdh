#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

vector<int> solution(vector<string> op) {
    priority_queue<int, vector<int>> h1, h2;
    int n = 0;

    for (int i = 0; i < op.size(); i++) {
        char s = op[i][0];
        int data = stoi(op[i].substr(2));
        if (s == 'I') {
            h1.push(data);
            h2.push(-data);
            n++;
        } else if (s == 'D') {
            if (data == 1 && !h1.empty()) {
                h1.pop(); n--;
            } else if (data == -1 && !h2.empty()){
                h2.pop(); n--;
            }
        }
        if (n == 0) {
            h1 = priority_queue<int,vector<int>>();
            h2 = priority_queue<int,vector<int>>();
        }
    }
    vector<int> answer;
    if (n <= 0) {
        answer.push_back(0); answer.push_back(0);
    } else {
        answer.push_back(h1.top()); answer.push_back(-h2.top());
    }

    return answer;
}