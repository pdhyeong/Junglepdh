#include <string>
#include <vector>
#include <stack>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    for(int i = 0;i<prices.size();i++){
        int time = 0;
        for(int j = i + 1;j<prices.size();j++){
            time++;
            if(prices[j] < prices[i]){
                break;
            }
        }
        answer.push_back(time);
    }
    return answer;
}