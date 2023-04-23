import heapq
from collections import deque
import sys
sys.setrecursionlimit(10**5)
input = sys.stdin.readline

n = int(input())

def dfs(k,color):
  visited[k] = color
  for i in graph[k]:
    if visited[i] == 0:
      result = dfs(i,-color)
      if not result:
        return False
    else:
      if visited[i] == color:
        return False
  return True

for i in range(n):
  v,e = map(int,input().split())
  graph = [[] for _ in range(v+1)]
  visited = [0] * (v+1)
  for i in range(e):
    e1,e2 = map(int,input().split())
    graph[e1].append(e2)
    graph[e2].append(e1)
  for i in range(1,v+1):
    if visited[i] == 0:
      result = (dfs(i,1))
      if not result:
        break
  print('YES') if result else print("NO")