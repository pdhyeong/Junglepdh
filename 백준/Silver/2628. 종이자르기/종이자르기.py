import sys
sys.setrecursionlimit(100000)

input = sys.stdin.readline
output = sys.stdout.write

n,m = map(int,input().split())

k = int(input())

row = [0]
col = [0]
for i in range(k):
  a,b = map(int,input().split())
  if a == 0:
    row.append(b)
  else:
    col.append(b)

row.sort()
col.sort()

row.append(m)
col.append(n)

r = []
c = []
for i in range(1,len(row)):
  r.append(row[i]-row[i-1])
for j in range(1,len(col)):
  c.append(col[j]-col[j-1])

print(max(r) * max(c))