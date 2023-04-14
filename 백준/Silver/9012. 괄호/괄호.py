import sys
sys.setrecursionlimit(100000)

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())


for i in range(n):
  k = input().rstrip()
  cnt = 0
  for i in k:
    if i == '(':
      cnt += 1
    else:
      cnt -= 1
    if cnt < 0:
      break
  if cnt == 0:
    print("YES")
  else:
    print("NO")