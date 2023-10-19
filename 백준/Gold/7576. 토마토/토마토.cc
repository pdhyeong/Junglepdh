#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
vector<vector<int> > graph;
int n,m;
int main() {
    cin >> n >> m;

    for(int i = 0;i<m;i++){
        vector<int> arr;
        for(int j = 0;j<n;j++){
            int k;
            cin >> k;
            arr.push_back(k);
        }
        graph.push_back(arr);
    }
    queue<pair<pair<int,int>,int> > q;
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            if(graph[i][j] == 1){
                q.push(make_pair(make_pair(i,j),0));
            }
        }
    }
    int result = 0;
    while(!q.empty()){
        int cx = q.front().first.first;
        int cy = q.front().first.second;
        int count = q.front().second;
        q.pop();
        for(int i = 0;i<4;i++){
            int nx = dx[i] + cx;
            int ny = dy[i] + cy;
            if(0 <= nx && nx < m && 0 <= ny && ny < n && graph[nx][ny] == 0){
                graph[nx][ny] = 1;
                q.push(make_pair(make_pair(nx,ny),count+1));
            }
        }
        result = max(result,count);
    }
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            if(graph[i][j] == 0){
                result = -1;
            }
        }
    }
    cout << result;
    return 0;
}