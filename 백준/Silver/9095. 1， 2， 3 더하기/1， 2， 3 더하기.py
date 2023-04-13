import sys
sys.setrecursionlimit(100000)

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())
# 2번
def recur(k):
  if k == 1:
    return 1
  if k == 2:
    return 2
  if k == 3:
    return 4
  return recur(k-1) + recur(k-2) + recur(k-3)

for i in range(n):
  put = int(input())
  print(recur(put))
  