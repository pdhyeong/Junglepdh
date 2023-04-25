import sys
from itertools import chain
from collections import deque
input = sys.stdin.readline


n,m = map(int,input().split())
graph = []
dx = [1,-1,0,0]
dy = [0,0,1,-1]
for _ in range(n):
    a = list(map(int, input().split()))
    graph.append(a)

def bfs(zx,zy,visited):
  q = deque()
  q.append((zx,zy))
  visited[zx][zy] = 1
  while q:
    x,y = q.popleft()
    for i in range(4):
      nx = x + dx[i]
      ny = y + dy[i]
      if 0 <= nx < n and 0 <= ny < m and graph[nx][ny] != 0 and visited[nx][ny] == 0:
        visited[nx][ny] = 1
        q.append((nx,ny))

def new_ice():
  global graph
  newice = [[0]*(m) for _ in range(n)]
  for i in range(n):
    for j in range(m):
      if graph[i][j] != 0:
        cnt = 0
        for k in range(4):
          nx = i + dx[k]
          ny = j + dy[k]
          if 0 <= nx < n and 0 <= ny < m and graph[nx][ny] == 0:
            cnt += 1
        newice[i][j] = max(graph[i][j] - cnt,0)
  graph = newice

time = 0
while True:
  an = 0
  visited = [[0]*(m) for _ in range(n)]
  for i in range(n):
    for j in range(m):
      if graph[i][j] != 0 and visited[i][j] == 0:
        bfs(i,j,visited)
        an += 1
  if an > 1:
    print(time)
    break
  if sum(chain(*graph)) == 0:
    print(0)
    break
  new_ice()
  time += 1