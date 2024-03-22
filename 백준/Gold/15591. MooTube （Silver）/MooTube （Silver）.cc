#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
vector<pair<int,int> > graph[5001];
int bfs(int k, int v){
    int cnt = 0;
    
    bool visited[5001];
    memset(visited, 0, sizeof(visited));
    visited[v] = true;
    
    queue<int> que;
    que.push(v);
    
    while(!que.empty()){
        int now = que.front();
        que.pop();
        
        for(int i = 0; i < graph[now].size(); i++){
            int next = graph[now][i].second;
            int next_road = graph[now][i].first;
            
            if(visited[next]) continue;
            if(next_road < k) continue;
            
            cnt++;
            visited[next] = true;
            que.push(next);
        }
    }
    
    return cnt;
}
void solve(int q){
    int k, v;
    for(int i = 0; i < q; i++){
        cin >> k >> v;
        cout << bfs(k, v) << "\n";
    }
}
int main() {
    int n,q;
    cin >> n >> q;
    for(int i = 0;i<n-1;i++){
        int from,to,usado;
        cin >> from >> to >> usado;
        graph[from].push_back(make_pair(usado,to));
        graph[to].push_back(make_pair(usado,from));
    }
    solve(q);
    return 0;
}