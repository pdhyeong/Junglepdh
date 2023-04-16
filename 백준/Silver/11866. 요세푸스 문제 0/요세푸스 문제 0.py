import sys
from collections import deque
input = sys.stdin.readline
output = sys.stdout.write

n ,m = map(int,input().split())
queue = deque()
cnt = 0
for i in range(1,n+1):
  queue.append(i)

lst = []
while len(queue) > 0:
  l = queue.popleft()
  cnt += 1
  if cnt % m != 0:
    queue.append(l)
  else:
    lst.append(l)

print("<",end="")
for i in range(len(lst)-1):
  print(lst[i],end=", ")
print(lst[len(lst)-1],end=">")