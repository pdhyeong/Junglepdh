#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    vector<int> answer(2,0);
    int start = 0;
    int sum = 0;
    vector<pair<int,int>> save_point;
    for(int i = 0;i<sequence.size();i++){
        sum += sequence[i];
        while(sum > k){
            sum -= sequence[start++];
        }
        if(sum == k){
            save_point.push_back({start,i});
        }
    }
    int min_dist = 1000001;
    for(int i = 0;i<save_point.size();i++){
        if(save_point[i].second - save_point[i].first < min_dist){
            min_dist = save_point[i].second - save_point[i].first;
            answer[0] = save_point[i].first;
            answer[1] = save_point[i].second;
        }
    }
    return answer;
}