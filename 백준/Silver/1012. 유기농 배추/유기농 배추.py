import sys
sys.setrecursionlimit(100000)
input = sys.stdin.readline

T = int(input())
dx = [1,-1,0,0]
dy = [0,0,1,-1]

for i in range(T):
  n,m,k = map(int,input().split())
  graph = [[0]*(m) for _ in range(n)]
  cnt = 0
  for snake in range(k):
    a,b = map(int,input().split())
    graph[a][b] = 1
  def dfs(x,y):
    for i in range(4):
      nx = x + dx[i]
      ny = y + dy[i]
      if 0<=nx<n and 0<=ny<m and graph[nx][ny] == 1:
        graph[nx][ny] = -1
        dfs(nx,ny)
        
  for x in range(n):
    for y in range(m):
      if graph[x][y] > 0:
        dfs(x,y)
        cnt += 1
  print(cnt)