#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

vector<pair<int,int> >graph[10001];
bool visited[10001] ={false,};
int result = 0;
void dfs(int now,int cost){
    if(visited[now]) {
        return;
    }
    if(cost > result){
        result = cost;
    }
    visited[now] = true;
    for(int i = 0;i<graph[now].size();i++){
        dfs(graph[now][i].first,graph[now][i].second + cost);
    }
}
int main(){
    int n;
    cin >> n;

    for(int i = 0;i<n-1;i++){
        int from,to, weigth;
        cin >> from >> to >> weigth;
        pair<int,int> to_data = make_pair(to,weigth);
        pair<int,int> from_data = make_pair(from,weigth);
        graph[from].push_back(to_data);
        graph[to].push_back(from_data);
    }
    for(int i = 1;i<=n;i++){
        memset(visited,false,sizeof(visited));
        if(!visited[i]){
            dfs(i,0);
        }
    }
    cout << result << '\n';
    return 0;
}