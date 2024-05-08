#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include<string.h>

using namespace std;
int graph[51][51];
bool visited[51][51];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int n,l,r;
int answer;
int max(int a,int b){
    if(a > b) return a;
    return b;
}
void show(){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout << graph[i][j] << ' ';
        }
        cout << '\n';
    }
}
int bfs(int x,int y){
    queue<pair<int,int> >q;
    vector<pair<int,int> > vec;
    q.push(make_pair(x,y));
    visited[x][y] = true;
    int max_value = 0;
    int cnt = 0;
    while(!q.empty()){
        int cx = q.front().first;
        int cy = q.front().second;
        cnt++;
        max_value+= graph[cx][cy];
        vec.push_back(make_pair(cx,cy));
        q.pop();
        for(int i = 0;i<4;i++){
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            if(nx >= 0 && nx < n && ny >= 0 
            && ny < n&& !visited[nx][ny] && abs(graph[cx][cy] - graph[nx][ny])>= l && abs(graph[cx][cy] - graph[nx][ny])<= r){
                visited[nx][ny] = true;
                q.push(make_pair(nx,ny));
            }
        }
    }
    for(int i = 0;i<vec.size();i++){
        int now_x = vec[i].first;
        int now_y = vec[i].second;
        graph[now_x][now_y] = max_value/cnt;
    }
    return cnt;
}
int main(){
    cin >> n >> l >> r;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            int k;
            cin >> k;
            graph[i][j] = k;
        }
    }
    int c = n * n;
    int cs = 0;
    string prev = "";
    while(c--){
        string s = "";
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(!visited[i][j]){
                    s += to_string(bfs(i,j));
                }
            }
        }
        if(prev == s){
            break;
        }
        prev = s;
        cs++;
        memset(visited,0,sizeof(visited));
    }
    cout << cs-1 << '\n';
    return 0;
}