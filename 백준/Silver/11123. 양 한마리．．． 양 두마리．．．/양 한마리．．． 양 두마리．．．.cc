#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
void bfs(vector<string> &graph,int x,int y){
    queue<pair<int,int> > q;
    q.push(make_pair(x,y));
    graph[x][y] = '.';
    while(!q.empty()){
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();
        for(int i = 0;i<4;i++){
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            if(nx >= 0 && nx < graph.size() && ny >= 0 && ny < graph[0].size() && graph[nx][ny] == '#'){
                graph[nx][ny] = '.';
                q.push(make_pair(nx,ny));
            }
        }
    }
}
int main(){
    int t;
    cin >> t;

    for(int i = 0;i<t;i++){
        int n,m;
        cin >> n >> m;
        vector<string> graph;
        for(int j = 0;j<n;j++){
            string s;
            cin >> s;
            graph.push_back(s);
        }
        int count = 0;
        for(int j = 0;j<graph.size();j++){
            for(int k = 0;k<graph[0].size();k++){
                if(graph[j][k] == '#'){
                    bfs(graph,j,k);
                    count++;
                }
            }
        }
        cout << count << '\n';
    }
    return 0;
}