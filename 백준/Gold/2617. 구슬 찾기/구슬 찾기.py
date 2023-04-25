import sys
from itertools import chain
from collections import deque
input = sys.stdin.readline

n,m = map(int,input().split())
heaviness = [[] for _ in range(n+1)]
lightness = [[] for _ in range(n+1)]
for i in range(m):
  a,b = map(int,input().split())
  heaviness[b].append(a)
  lightness[a].append(b)

mid = (n+1)// 2

def dfs(arr,k):
  global cnt
  for i in arr[k]:
    if visited[i] == 0:
      visited[i]=True
      cnt+=1
      dfs(arr,i)

result = 0
for i in range(1,n+1):
    visited=[0]*(n+1)
    cnt=0
    dfs(heaviness,i)
    if cnt>=mid:
        result+=1
    cnt=0
    dfs(lightness,i)
    if cnt>=mid:
        result+=1


print(result)