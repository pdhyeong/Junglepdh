import sys
from collections import deque

input = sys.stdin.readline

n, m = map(int, input().split())
graph = []
dx, dy = [1, -1, 0, 0], [0, 0, 1, -1]

for _ in range(n):
    a = list(map(int, input().split()))
    graph.append(a)

def bfs(zx, zy, visited):
    q = deque([(zx, zy)])
    visited[zx * m + zy] = 1

    while q:
        x, y = q.popleft()
        for i in range(4):
            nx, ny = x + dx[i], y + dy[i]
            if 0 <= nx < n and 0 <= ny < m and visited[nx * m + ny] == 0 and graph[nx][ny] != 0:
                visited[nx * m + ny] = 1
                q.append((nx, ny))

def new_ice():
    global graph
    newice = [[0] * m for _ in range(n)]
    for i in range(n):
        for j in range(m):
            if graph[i][j] != 0:
                cnt = sum([1 for k in range(4) if 0 <= i + dx[k] < n and 0 <= j + dy[k] < m and graph[i + dx[k]][j + dy[k]] == 0])
                newice[i][j] = max(graph[i][j] - cnt, 0)
    graph = newice

time = -1
while True:
    visited = [0] * (n * m)
    cnt = 0
    for i in range(n):
        for j in range(m):
            if graph[i][j] != 0 and visited[i * m + j] == 0:
                bfs(i, j, visited)
                cnt += 1
    if cnt == 0:
        print(0)
        break
    elif cnt > 1:
        print(time + 1)
        break
    new_ice()
    time += 1
