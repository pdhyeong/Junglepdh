import sys
from collections import deque
input = sys.stdin.readline

n, m, k, x = map(int, input().split())
graph = [[] for _ in range(n+1)]
distance = [0] * (n+1)

for _ in range(m):
    a, b = map(int, input().split())
    graph[a].append(b)

flag = 0
def bfs(start):
  global flag
  answer = []
  q = deque([start])
  flag = flag | 1 << start
  distance[start] = 0
  while q:
      now = q.popleft()
      for i in graph[now]:
          if flag & 1 << i == 0:
              flag = flag | 1 << i
              q.append(i)
              distance[i] = distance[now] + 1
              if distance[i] == k:
                  answer.append(i)
  if len(answer) == 0:
      print(-1)
  else:
      answer.sort()
      for i in answer:
          print(i, end='\n')

bfs(x)