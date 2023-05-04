import sys
sys.setrecursionlimit(10 ** 6)
input = sys.stdin.readline

n, m = map(int, input().split())
graph = []

for i in range(n):
  graph_data = list(map(int,input().split()))
  graph.append(graph_data)
  
visited = [[-1] * m for _ in range(n)]
dx = [1,-1,0,0]
dy = [0,0,1,-1]

def dfs(x, y):
    if x == n-1 and y == m-1:
        return 1
    if visited[x][y] != -1:
        return visited[x][y]
    result = 0
    for i in range(4):
        nx, ny = x + dx[i], y + dy[i]
        if 0 <= nx < n and 0 <= ny < m and graph[x][y] > graph[nx][ny]:
            result += dfs(nx, ny)
    
    visited[x][y] = result
    return visited[x][y]

print(dfs(0,0))