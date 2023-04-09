import sys
import itertools

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())
lst = list(map(int,input().split()))
npr = list(itertools.permutations(lst, n))

mx = -101
hab = 0
for i in range(len(npr)):
  sum = 0
  for j in range(len(npr[i])-1):
    sum += (abs(npr[i][j] - npr[i][j+1]))
  mx = max(sum,mx)
output(str(mx))