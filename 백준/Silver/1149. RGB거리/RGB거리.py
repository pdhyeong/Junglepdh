import sys
import heapq

input = sys.stdin.readline

n = int(input())

lst = [0]

for i in range(n):
  lst.append(list(map(int,input().split())))


for i in range(2,n+1):
  lst[i][0] = min(lst[i-1][1] + lst[i][0],lst[i-1][2] + lst[i][0])
  lst[i][1] = min(lst[i-1][0] + lst[i][1],lst[i-1][2]+ lst[i][1])
  lst[i][2] = min(lst[i-1][0] + lst[i][2],lst[i-1][1 ]+ lst[i][2])

print(min(lst[n]))