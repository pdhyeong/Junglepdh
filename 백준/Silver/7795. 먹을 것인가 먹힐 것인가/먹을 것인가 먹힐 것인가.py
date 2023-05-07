import sys
input = sys.stdin.readline
sys.setrecursionlimit(100000)

t = int(input())

for i in range(t):
  a , b = map(int,input().split())
  alst = list(map(int,input().split()))
  blst = list(map(int,input().split()))
  newalist = sorted(alst,reverse=True)
  newblist = sorted(blst)
  cnt = 0
  for adata in newalist:
    for bdata in newblist:
      if adata > bdata:
        cnt += 1
      else:
        break
  print(cnt)