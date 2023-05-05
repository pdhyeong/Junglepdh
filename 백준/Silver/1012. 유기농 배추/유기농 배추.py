import sys
sys.setrecursionlimit(100000)
input = sys.stdin.readline

T = int(input())
for i in range(T):
  n,m,k = map(int,input().split())
  graph = [[0]*(m) for _ in range(n)]
  cnt = 0
  for snake in range(k):
    a,b = map(int,input().split())
    graph[a][b] = 1
    def dfs(x,y):
      if x<0 or x>=n or y<0 or y>=m:
        return False
      if graph[x][y] == 1:
        graph[x][y] = -1
        dfs(x+1,y)
        dfs(x-1,y)
        dfs(x,y+1)
        dfs(x,y-1)
        return True
      return False
        
  for x in range(n):
    for y in range(m):
      if dfs(x,y):
        cnt += 1
  print(cnt)