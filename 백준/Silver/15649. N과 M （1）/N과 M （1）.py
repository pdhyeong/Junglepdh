import sys

input = sys.stdin.readline
output = sys.stdout.write

n,m = map(int,input().split())

visited = [False] * (n+1)
list = [0]*(n+1)
def func(k):
  if k == m:
    for i in range(m):
      print(list[i],end=" ")
    print()
    return
  for i in range(1,n+1):
    if visited[i] == False:
      list[k] = i
      visited[i] = True
      func(k+1)
      visited[i] = False


func(0)