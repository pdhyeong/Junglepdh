import heapq
from collections import deque
import sys
sys.setrecursionlimit(10**5)
input = sys.stdin.readline

n = int(input()) 
color = [0] + list(map(int,input().rstrip()))

graph = [[] for _ in range(n+1)] 
flag = 0
ans = 0

def dfs(v, cnt):
  global flag
  flag = flag | 1 << v
  for i in graph[v]:
    if color[i] == 1:
          cnt += 1 
    elif flag & 1 << i == 0 and color[i] == 0:
      cnt = dfs(i, cnt)
  return cnt

for _ in range(n-1): 
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)
    if color[a] == 1 and color[b] == 1: 
      ans +=2

sum = 0
for i in range(1, n+1):
    if flag & 1 << i == 0 and color[i] == 0:
        x = dfs(i, 0) 
        sum += x*(x-1) 

print(sum+ans)