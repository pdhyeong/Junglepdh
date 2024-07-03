#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
using namespace std;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
bool visited[501][501];
int max_yValue = 0;
int n;
int m;
pair<int,int> checking_soil(vector<vector<int>> &land,int x,int y){
    pair<int,int> p;
    int Y_value = 0;
    int result = 0;
    queue<pair<int,int>> q;
    q.push(make_pair(x,y));
    visited[x][y] = 1;
    result++;
    
    while(!q.empty()){
        int sx = q.front().first;
        int sy = q.front().second;
        Y_value = max(sy,Y_value);
        q.pop();
        
        for(int i = 0;i<4;i++){
            int nx = sx + dx[i];
            int ny = sy + dy[i];
            if(0<=nx && nx < n && 0 <= ny && ny < m && !visited[nx][ny] && land[nx][ny]){
                q.push(make_pair(nx,ny));
                visited[nx][ny] = 1;
                result++;
            }
        }
    }
    p.first = result;
    p.second = Y_value;
    return p;
}
int solution(vector<vector<int>> land) {
    int answer = 0;
    n = land.size();
    m = land[0].size();
    pair<int,int> p;
    int veccnt = 0;
    vector<pair<pair<int,int>,int>> vec;
    for(int j = 0;j<land[0].size();j++){
        int count = 0;
        int start = j;
        for(int i = 0;i < land.size();i++){
            if(land[i][j] && !visited[i][j]){
                p = checking_soil(land,i,j);
                count = p.first;
                vec.push_back({{start,p.second},count});
            }
        }
    }
    
    for(int i = 0;i<m;i++){
        int cnt = 0;
        for(int j = 0;j<vec.size();j++){
            if(vec[j].first.first <= i && i <= vec[j].first.second){
                cnt += vec[j].second;
            }
        }
        answer = max(answer,cnt);
    }
    return answer;
}