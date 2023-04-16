import sys
from collections import deque
input = sys.stdin.readline
output = sys.stdout.write

snake = deque()
checktime = deque()

n = int(input())

apple = int(input())

isapple = [[0] * n for _ in range(n)]

for i in range(apple):
  x,y = map(int,input().split())
  isapple[x-1][y-1] = 1

direct = int(input())
darr = deque()
for i in range(direct):
  t, dir= input().split()
  darr.append((int(t),dir))



time = 0
i,j = 0,0
# 상하좌우
move = 0
snake.append((i,j))
while True:
  time += 1
  if move == 0:
    j += 1
  elif move == 1:
    i+=1
  elif move == 2:
    j-=1
  elif move == 3:
    i-=1 
  if i >= n or i < 0 or j >= n or j < 0 or (i,j) in snake:
    break
  if len(darr) > 0:
    if time == darr[0][0]:
      if darr[0][1] == 'D':
        move = (move+ 1) % 4
      elif darr[0][1] == 'L':
        move = (move - 1 + 4) % 4
      darr.popleft()
  snake.append((i,j))
  if isapple[i][j] == 0:
    snake.popleft()
  else:
    isapple[i][j] = 0
print(time)