import sys
from collections import deque
import heapq
input = sys.stdin.readline

n = int(input())

leftheap = []
rightheap = []
answer = []
for i in range(n):
  k = int(input())
  if len(leftheap) == len(rightheap):
    heapq.heappush(leftheap,(-k,k))
  else:
    heapq.heappush(rightheap,(k,k))

  if rightheap and leftheap[0][1] > rightheap[0][0]:
    min = heapq.heappop(rightheap)[0]
    max = heapq.heappop(leftheap)[1]
    heapq.heappush(leftheap,(-min,min))
    heapq.heappush(rightheap,(max,max))
  answer.append(leftheap[0][1])

for j in answer:
  print(j)