import sys
sys.setrecursionlimit(100000)

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())
lst = list(map(int,input().split()))
mn = 10000000001
com = [0,0]
lst.sort()
start = 0
end = n-1
while start < end:
  sum = lst[start] + lst[end]
  if mn > abs(sum):
    mn = abs(sum)
    com[0] = lst[start]
    com[1] = lst[end]
    if sum == 0:
      break
  if sum < 0:
    start += 1
  else:
    end -= 1

print(com[0],com[1])