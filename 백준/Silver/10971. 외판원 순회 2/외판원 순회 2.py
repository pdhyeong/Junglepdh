import sys

input = sys.stdin.readline
output = sys.stdout.write

N = int(input())
maps = []
for _ in range(N):
    maps.append(list(map(int, input().split())))

visited = [0] * N
tmp = 10000000
add = 0

def TSP(i, add, visited):
    global tmp
    if add > tmp:
        return
    if sum(visited) == N-1:
        if maps[i][0]:
            tmp = min(tmp, add+maps[i][0])
        return
    for j in range(1, N):
        if maps[i][j] and visited[j] == 0:
            visited[j] = 1
            TSP(j, add+maps[i][j], visited)
            visited[j] = 0


for i in range(1, N):
    if maps[0][i]:
        visited[i] = 1
        TSP(i, maps[0][i], visited)
        visited[i] = 0

print(tmp)