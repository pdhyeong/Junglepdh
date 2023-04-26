import sys
from itertools import chain
from collections import deque
import heapq
input = sys.stdin.readline

n,m = map(int,input().split())

graph = []

visited = [[0]*(m) for _ in range(n)]

dx = [-1,1,0,0]
dy = [0,0,-1,1]

for i in range(n):
  st = list(map(str,input().rstrip()))
  graph.append(st)


def bfs():
    q = deque()

    for i in range(n):
        for j in range(m):
            if graph[i][j] == "*":
                q.appendleft((i, j))
                visited[i][j] = 1
            elif graph[i][j] == "S":
                q.append((i, j))
                visited[i][j] = 1

    while q:
        x, y = q.popleft()

        for i in range(4):
            nx, ny = x + dx[i], y + dy[i]

            if 0 <= nx < n and 0 <= ny < m:
              if (visited[nx][ny] != 0) or (graph[nx][ny] == "*" or graph[nx][ny] == "X") or (graph[nx][ny] == "D" and graph[x][y] == "*"):
                continue
              if graph[nx][ny] == "D" and graph[x][y] == "S":
                 return visited[x][y]
              q.append((nx, ny))
              visited[nx][ny] = visited[x][y] + 1
              graph[nx][ny] = graph[x][y]
    return "KAKTUS"


print(bfs())