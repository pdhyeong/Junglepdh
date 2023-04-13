import sys
sys.setrecursionlimit(100000)

input = sys.stdin.readline
output = sys.stdout.write

n,h = map(int,input().split())
lst = list(map(int,input().split()))

mx = 2000000001
result = 0
def binarysearch(start,end,target):
  while start <= end:
    mid = (start + end) // 2
    sm = 0
    for i in range(n):
      if lst[i] > mid:
        sm += lst[i] - mid
    if sm < target:
      end = mid - 1
    else:
      result = mid
      start = mid + 1
  print(result)

binarysearch(0,mx,h)