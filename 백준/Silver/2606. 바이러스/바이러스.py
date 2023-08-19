import sys

input = sys.stdin.readline

n = int(input().strip())

m = int(input().strip())

graph = [[] for _ in range(n+1)]

visit = [0] * (n+1)

for i in range(m):
    a,b = map(int,input().split())
    graph[a].append(b)
    graph[b].append(a)

cnt = 0
def dfs(n):
    global cnt
    if visit[n] == 1:
        return
    visit[n] = 1
    cnt += 1
    for i in graph[n]:
        dfs(i)
dfs(1)
print(cnt-1)