import sys

input = sys.stdin.readline
output = sys.stdout.write

n,m = map(int,input().split())

list = [0] * (n+1)
visited = [False] * (n+1)

def nandm(k,num):
  if k == m:
    for i in range(m):
      print(list[i],end=" ")
    print()
    return
  else:
    for i in range(num,n+1):
      list[k] = i
      visited[i] = True
      nandm(k+1,i+1)
      visited[i] = False

nandm(0,1)