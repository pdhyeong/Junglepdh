#include <string>
#include <vector>
#include <iostream>
using namespace std;
bool visited[201];
void dfs(vector<vector<int>> &computers,int n){
    if(visited[n+1] == true){
        return;
    }
    visited[n+1] = true;
    for(int i = 0;i<computers[n].size();i++){
        if(!visited[i+1] && computers[n][i] == 1){
            dfs(computers,i);
        }
    }
}
int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    for(int i = 0;i<computers.size();i++){
        if(!visited[i+1]){
            dfs(computers,i);
            answer++;
        }
    }
    return answer;
}