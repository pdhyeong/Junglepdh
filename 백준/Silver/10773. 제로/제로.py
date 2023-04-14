import sys
sys.setrecursionlimit(100000)

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())
ls = []
for i in range(n):
  k = int(input())
  if k == 0:
    ls.pop()
  else:
    ls.append(k)

print(sum(ls))