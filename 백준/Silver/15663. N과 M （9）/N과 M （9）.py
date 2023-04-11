import sys

input = sys.stdin.readline
output = sys.stdout.write

n,m = map(int,input().split())

lst = list(map(int,input().split()))
visited = [False] * (n+1)

listed = [0] * (n+1)

lst.sort()
check = 0
def nandm(k):
  check = 0
  if k == m:
    for i in range(m):
      print(listed[i],end = " ")
    print()
    return
  else:
    for i in range(0,n):
      if visited[i] == False and lst[i] != check:
        listed[k] = lst[i]
        check = lst[i]
        visited[i] = True
        nandm(k+1)
        visited[i] = False
nandm(0)