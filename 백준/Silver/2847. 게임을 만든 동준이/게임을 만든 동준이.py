import sys
input = sys.stdin.readline

n = int(input())
lst = []

for i in range(n):
  k = int(input())
  lst.append(k)

changelst = []
for i in range(n-1,-1,-1):
  changelst.append(lst[i])

cnt = 0

for i in range(1,len(changelst)):
  x = changelst[i-1]-1
  if changelst[i] > x:
    cnt += changelst[i] - x
    changelst[i] = x

print(cnt)