import sys
from itertools import chain
from collections import deque
import heapq
input = sys.stdin.readline

n,m = map(int,input().split())

house = []
search = [1,-1]
for i in range(n):
  house.append(list(input().rstrip()))

def dfs(x,y):
  if house[x][y] == '-':
    house[x][y] = '1'
    for i in range(2):
      ny = y + search[i]
      if 0<= ny < m and house[x][ny] == '-':
        dfs(x,ny)

  if house[x][y] == '|':
    house[x][y] = '1'
    for i in range(2):
      nx = x + search[i]
      if 0<= nx < n and house[nx][y] == '|':
        dfs(nx,y)

cnt = 0
for i in range(n):
  for j in range(m):
    if house[i][j] == '-' or house[i][j] == '|':
      dfs(i,j)
      cnt += 1

print(cnt)