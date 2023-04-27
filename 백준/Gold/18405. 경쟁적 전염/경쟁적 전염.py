import sys
from itertools import chain
from collections import deque
import heapq
input = sys.stdin.readline

n,k = map(int,input().split())

graph = []

for i in range(n):
  graph.append(list(map(int,input().split())))


sec,inx,iny = map(int,input().split())
dx = [0, 0, -1, 1]
dy = [1, -1, 0, 0]
virusdata = []
for i in range(n):
  for j in range(n):
    if graph[i][j] != 0:
      virusdata.append((graph[i][j],0,i,j))

virusdata.sort()

q = deque(virusdata)

while q:
    virus,s,x, y = q.popleft()
    if s == sec:
        break
    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]
        if 0 <= nx < n and 0 <=ny < n:
            if graph[nx][ny] == 0:
                graph[nx][ny] = virus
                q.append((virus,s+1, nx,ny))

print(graph[inx-1][iny-1])