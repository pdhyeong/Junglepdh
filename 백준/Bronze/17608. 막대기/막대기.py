import sys
sys.setrecursionlimit(100000)

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

lst = []
for i in range(n):
  k = int(input())
  lst.append(k)

cnt = 0
mx = -1
for i in range(len(lst)-1,-1,-1):
  if mx < lst[i]:
    mx = max(mx,lst[i])
    cnt += 1

print(cnt)