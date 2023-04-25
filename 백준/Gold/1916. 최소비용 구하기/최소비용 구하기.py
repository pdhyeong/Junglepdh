import sys
from collections import deque
import heapq
input = sys.stdin.readline

INF = int(1e9)

n = int(input())
m = int(input())
graph = [[] for _ in range(n+1)]
distance = [INF] * (n+1)

for _ in range(m):
    a, b, c = map(int, input().split())
    graph[a].append((b, c))
  
start,end = map(int,input().split())

def dijkstra(start):
    q = []
    heapq.heappush(q,(0,start))
    distance[start] = 0
  # 힙 큐에 넣고 비교
    while q:
      # 거리와 지금 인덱스번호를 뺸다
        dist, now = heapq.heappop(q)
      # 현재거리가 뺀거리 보다 낮다면
        if distance[now] < dist:
          continue
      # 연결된 노드 들을 비교
        for j in graph[now]:
          # 현재의 거리 + 들리는 노드의 가중치
            cost = dist + j[1]
          # 합친 노드의 그 노드의 원래 있던 가중치 보다 낮다면 갱신
            if cost < distance[j[0]]:
                distance[j[0]] = cost
                heapq.heappush(q, (cost, j[0]))

dijkstra(start)

print(distance[end])