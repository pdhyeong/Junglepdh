#include <string>
#include <vector>
#include <iostream>
using namespace std;
bool visited[201] = {0,};
bool dfs(int r,vector<vector<int>> &computers){
    if(visited[r] == true){
        return false;
    }
    visited[r] = true;
    for(int i = 0;i<computers[r].size();i++){
        if(!visited[i] && computers[r][i] == 1){
            dfs(i,computers);
        }
    }
    return true;
}
int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    for(int i = 0;i<n;i++){
        int a = 0;
        if(dfs(i,computers)){
            a++;
        }
        answer += a;
    }
    return answer;
}