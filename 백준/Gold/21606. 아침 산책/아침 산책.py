import heapq
from collections import deque
import sys
sys.setrecursionlimit(10**5)
input = sys.stdin.readline

n = int(input())
graph = [[] for _ in range(n+1)]

color = input()
flag = 0
cnt = 0

def dfs(k):
  global flag
  global cnt
  if color[k] == '1':
    cnt += 2
    return
  if flag & 1 << k != 0:
    return
  flag = flag | 1 << k
  for i in graph[k]:
    if color[k] == '0':
      dfs(i)
    
for i in range(n-1):
  start , end = map(int,input().split())
  graph[start].append(end)
  graph[end].append(start)

for i in range(1,n+1):
  if flag & 1 << i == 0:
    dfs(i)

print(cnt)