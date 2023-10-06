#include<iostream>
#include<math.h>
#include<cmath>
#include<stack>
#include <vector>
#include<algorithm>

using namespace std;

int cnt = 0;
vector<int> graph[101];
bool visited[101];

void dfs(int x) {
  if(visited[x] == true){
    return;
  }
  visited[x] = true;
  cnt++;
  for(int i = 0;i<graph[x].size();i++){
    int y = graph[x][i];
    if(!visited[y]) dfs(y);
  }
}
int main() {
  int computer,pair;
  cin >> computer >> pair;
  for(int i = 0;i<pair;i++){
    int x,y;

    cin >> x >> y;

    graph[x].push_back(y);
    graph[y].push_back(x);
  }

  for(int i = 1 ;i<=computer;i++){
    sort(graph[i].begin(),graph[i].end());
  }
  dfs(1);
  cout << cnt-1 << endl;
}