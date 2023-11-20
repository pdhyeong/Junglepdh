#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(int i = 0;i<commands.size();i++){
        vector<int> vec;
        int start = commands[i][0]-1;
        int end = commands[i][1];
        int k = commands[i][2];
        for(int j = start;j<end;j++){
            vec.push_back(array[j]);
        }
        sort(vec.begin(),vec.end());
        answer.push_back(vec[k-1]);
    }
    return answer;
}