import heapq
from collections import deque
import sys
input = sys.stdin.readline

n = int(input())
m = int(input())
graph = [[] for _ in range(n+1)]

# 그래프 그리기
for i in range(m):
  a,b = map(int,input().split())
  graph[a].append(b)
  graph[b].append(a)

visited = [0] * (n+1)
cnt = 0
def dfs(n):
  global cnt
  if visited[n] == True:
    return
  visited[n] = True
  cnt += 1
  for i in graph[n]:
    dfs(i)

dfs(1)
print(cnt-1)