#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int visited[20001];
vector<int> graph[20001];
int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
    vector<int> dist(n+1,-1);
    for(int i = 0;i<edge.size();i++){
        int from = edge[i][0];
        int to = edge[i][1];
        graph[from].push_back(to);
        graph[to].push_back(from);
    }
    queue<int> q;
    
    dist[1] = 0;
    q.push(1);
    
    while(!q.empty())
    {
        int current = q.front();
        q.pop();
        
        for(int next : graph[current])
        {
            if(dist[next] == -1)
            {
                dist[next] = dist[current] + 1;
                q.push(next);
            }
        }
    }
    
    int far = *max_element(dist.begin(), dist.end());
    
    for(int i=0; i<dist.size(); i++)
    {
        if(dist[i] == far)
        {
            answer++;
        }
    }
    return answer;
}