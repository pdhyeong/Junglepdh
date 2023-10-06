#include<iostream>
#include<math.h>
#include<cmath>
#include<stack>
#include <queue>
#include <vector>
#include<algorithm>

using namespace std;

int cnt = 0;
vector<int> graph[1001];
bool visited[1001];
bool visited2[1001];

void dfs(int start) {
  if(visited[start] == true){
    return;
  }
  visited[start] = true;
  cout << start << " ";

  for(int i = 0;i<graph[start].size();i++){
    int y = graph[start][i];
    if(!visited[y]) dfs(y);
  }
}
void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited2[start] = true;
    while(!q.empty()) {
        int x = q.front();
        q.pop();
        cout << x << ' ';
        for(int i = 0; i < graph[x].size(); i++) {
            int y = graph[x][i];
            if(!visited2[y]) {
                q.push(y);
                visited2[y] = true;
            }
        }
    }
}
int main() {
  int n,m,k;

  cin >> n >> m >> k;

  for(int i = 0;i<m;i++){
    int x,y;

    cin >> x >> y;

    graph[x].push_back(y);
    graph[y].push_back(x);
  }
  for(int i = 1; i<=n;i++){
    sort(graph[i].begin(),graph[i].end());
  }
  dfs(k);
  cout << '\n';
  bfs(k);
}