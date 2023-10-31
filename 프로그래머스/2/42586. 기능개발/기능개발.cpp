#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int add = 1;
    int max = (99 - progresses[0]) / speeds[0] + 1;
    for(int i = 1;i<progresses.size();i++){
        int check = (99 - progresses[i]) / speeds[i] + 1;
        if(max >= check){
            add++;
        }
        else{
            max = check;
            answer.push_back(add);
            add = 1;
        }
    }
    answer.push_back(add);
    return answer;
}