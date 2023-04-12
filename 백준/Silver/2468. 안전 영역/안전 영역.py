import sys
sys.setrecursionlimit(100000)
input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

maps = []
for i in range(n):
  k = list(map(int,input().split()))
  maps.append(k)


dx = [-1,1,0,0]
dy = [0,0,-1,1]


def dfs(x,y,h):
  for i in range(4):
    nx = x + dx[i]
    ny = y + dy[i]
    if (0 <= nx < n) and (0 <= ny <n) and visited[nx][ny] == False and maps[nx][ny] > h:
      visited[nx][ny] = True
      dfs(nx,ny,h)

max_value = max(map(max,maps))

answer = 1
for h in range(1,max_value):
  visited = [[False] * n for _ in range(n)]
  cnt = 0
  for i in range(n):
    for j in range(n):
      if visited[i][j] == False and maps[i][j] > h:
        cnt += 1
        dfs(i,j,h)
  answer = max(answer,cnt)


print(answer)