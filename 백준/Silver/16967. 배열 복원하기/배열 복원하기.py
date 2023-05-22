import sys
input = sys.stdin.readline

h,w,x,y = map(int,input().split())
lst = []
for i in range(h+x):
  k = list(map(int,input().split()))
  lst.append(k)

for i in range(x,h+x):
  for j in range(y,w+y):
    lst[i][j] -= lst[i-x][j-y]

for i in range(h):
  for j in range(w):
    print(lst[i][j],end=' ')
  print()