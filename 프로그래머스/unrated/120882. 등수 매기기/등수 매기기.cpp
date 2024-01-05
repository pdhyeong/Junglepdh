#include <string>
#include <vector>
#include <iostream>
using namespace std;
vector<int> solution(vector<vector<int>> score) {
    vector<int> answer(score.size(),1);
    vector<int> score_list;
    for(int i = 0;i<score.size();i++){
        score_list.push_back(score[i][0]+score[i][1]);
    }
    for(int i = 0;i<score_list.size();i++){
        for(int j = 0;j<score_list.size();j++){
            if(score_list[i] < score_list[j]){
                answer[i]++;
            }
        }
    }
    return answer;
}