#include <string>
#include <queue>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int visited[101][101] = {0,};
vector<string> graph;
int bfs(int x,int y){
    queue<pair<int,int>> q;
    int s = 0;
    q.push({x,y});
    visited[x][y] = 1;
    while(!q.empty()){
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();
        s += graph[cx][cy] - '0';
        for(int i = 0;i<4;i++){
            int nx = dx[i] + cx;
            int ny = dy[i] + cy;
            if(nx < 0 || nx >= graph.size() || ny < 0 || ny >= graph[0].size() || visited[nx][ny] == 1 || graph[nx][ny] == 'X'){
                continue;
            }
            else{
                q.push({nx,ny});
                visited[nx][ny] = 1;
            }
        }
    }
    return s;
}
vector<int> solution(vector<string> maps) {
    vector<int> answer;
    for(int i = 0;i<maps.size();i++){
        string ds = "";
        for(int j = 0;j<maps[i].size();j++){
            ds += maps[i][j];
        }
        graph.push_back(ds);
    }
    for(int i = 0;i<maps.size();i++){
        for(int j = 0;j<maps[i].size();j++){
            if(graph[i][j] != 'X' && visited[i][j] != 1){
                int a = bfs(i,j);
                cout << i << ' ' << j  << '\n';
                answer.push_back(a);
            }
        }
    }
    sort(answer.begin(),answer.end());
    if(answer.size() == 0){
        answer.push_back(-1);
        return answer;
    }
    return answer;
}