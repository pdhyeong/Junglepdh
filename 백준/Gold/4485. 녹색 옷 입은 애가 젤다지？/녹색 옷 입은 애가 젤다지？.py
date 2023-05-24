import heapq
import sys
input = sys.stdin.readline

INF = int(1e9)

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

def dijkstra():
    q = []
    heapq.heappush(q, (graph[0][0], 0, 0))
    distance[0][0] = 0
    while q:
        cost, x, y = heapq.heappop(q)
        if x == n - 1 and y == n - 1:
            return distance[x][y]
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if 0 <= nx < n and 0 <= ny < n:
                ncost = cost + graph[nx][ny]
                if ncost < distance[nx][ny]:
                    distance[nx][ny] = ncost
                    heapq.heappush(q, (ncost, nx, ny))

count = 1
while True:
    n = int(input())
    if n == 0:
        break
    graph = []
    for i in range(n):
      row = list(map(int,input().split()))
      graph.append(row)
    distance = [[INF] * n for _ in range(n)]
    print('Problem {}: {}'.format(count,dijkstra()))
    count += 1