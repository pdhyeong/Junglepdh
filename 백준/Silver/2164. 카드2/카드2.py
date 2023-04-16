import sys
from collections import deque
input = sys.stdin.readline
output = sys.stdout.write

queue = deque()

n = int(input())
for i in range(1,n+1):
  queue.append(i)

while len(queue) > 0:
  queue.popleft()
  if len(queue) == 0:
    queue.append(1)
    break
  l = queue.popleft()
  queue.append(l)
  if len(queue) == 1:
    break

print(queue[0])