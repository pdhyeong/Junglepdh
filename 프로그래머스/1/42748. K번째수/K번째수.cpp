#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> slice(vector<int> & array,int start,int end){
    vector<int> result;
    for(int i = start-1;i<end;i++){
        result.push_back(array[i]);
    }
    sort(result.begin(),result.end());
    return result;
}
vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(int i = 0;i<commands.size();i++){
        int start = commands[i][0];
        int end = commands[i][1];
        int target = commands[i][2];
        vector<int> result = slice(array,start,end);
        answer.push_back(result[target-1]);
    }
    return answer;
}