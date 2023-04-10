import sys

input = sys.stdin.readline
output = sys.stdout.write

visited1 = [False] * 40
visited2 = [False] * 40
visited3 = [False] * 40

n = int(input())
cnt = 0
def nqueen(cur):
  if cur == n:
    global cnt
    cnt += 1
    return

  for i in range(n):
    if visited1[i] or visited2[i + cur] or visited3[cur-i+n-1] :
      continue
    visited1[i] = True
    visited2[i + cur] = True
    visited3[cur-i+n-1] = True
    nqueen(cur + 1)
    visited1[i] = False
    visited2[i+cur] = False
    visited3[cur-i+n-1] = False

nqueen(0)
output(str(cnt))