#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
vector<int> graph[500001];
bool visit[500001];
int tree[500001];
void bfs(int r){
    queue<int> q;
    q.push(r);
    visit[r] = true;
    while(!q.empty()){
        int now = q.front();
        q.pop();
        int current_cost = tree[now];
        int count = 0;
        for(int i = 0;i<graph[now].size();i++){
            if(!visit[graph[now][i]]) count++;
        }
        if(count){
            tree[now] = 0;
        }
        for(int i = 0;i<graph[now].size();i++){
            int next_node = graph[now][i];
            if(!visit[next_node]){
                tree[graph[now][i]] = 1;
                q.push(next_node);
                visit[next_node] = true;
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cout.precision(11);
    int n;
    double water;
    cin >> n >> water;
    tree[1] = water;
    for(int i = 0;i<n-1;i++){
        int a,b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    bfs(1);
    double result = 0;
    int water_list = 0;
    for(int i = 1;i<=n;i++){
        if(tree[i] != 0){
            water_list++;
        }
    }
    cout << water / water_list;
    return 0;
}