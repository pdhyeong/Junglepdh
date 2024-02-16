#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> graph[500000];
int visit[1001];
void dfs(int k){
    if(visit[k]){
        return ;
    }
    visit[k] = 1;
    for(int i = 0;i<graph[k].size();i++){
        dfs(graph[k][i]);
    }
}
int main(){
    int n,m;
    cin >> n >> m;
    for(int i = 0;i<m;i++){
        int a,b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int count = 0;
    for(int i = 1;i<=n;i++){
        if(!visit[i]){
            dfs(i);
            count++;
        }
    }
    cout << count;
    return 0;
}