import sys
input = sys.stdin.readline

n, l = map(int, input().split())
woong = [list(map(int, input().split())) for _ in range(n)]
woong.sort(key=lambda x: x[0])
flag = woong[0][0]
result = 0
for start, end in woong:
  if flag > end:
      continue
  elif flag < start:
      flag = start
  dist = end - flag
  mod = 1
  if dist % l == 0:
      mod = 0
  count = dist // l + mod
  flag += count * l
  result += count
print(result)  