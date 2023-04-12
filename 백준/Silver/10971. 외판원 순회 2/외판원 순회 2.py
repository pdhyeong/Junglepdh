import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())
graph = []
visited = [0]*n
for i in range(n):
  k = list(map(int,input().split()))
  graph.append(k)

tmp = 10000001
add = 0
def back(i,add):
  global tmp
  if add > tmp:
    return
  if sum(visited) == n-1:
    if graph[i][0]:
      tmp = min(tmp,add+graph[i][0])
    return
  for j in range(1,n):
    if visited[j] == 0 and graph[i][j]:
      visited[j] = 1
      back(j,add + graph[i][j])
      visited[j] = 0


for i in range(1,n):
  if graph[0][i]:
    visited[i] = 1
    back(i,graph[0][i])
    visited[i] = 0

print(tmp)