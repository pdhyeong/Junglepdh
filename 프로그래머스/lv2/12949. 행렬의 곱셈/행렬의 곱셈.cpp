#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    for(int i = 0;i<arr1.size();i++) {
        vector<int> an1;
        for(int j = 0;j<arr2[0].size();j++){
            int value = 0;
            for(int k = 0;k<arr1[0].size();k++){
                value += arr1[i][k] * arr2[k][j];
            }
            an1.push_back(value);
        }
        answer.push_back(an1);
    }
    return answer;
}