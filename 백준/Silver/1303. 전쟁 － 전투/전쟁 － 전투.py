import sys
sys.setrecursionlimit(300000)
input = sys.stdin.readline

dx = [0,0,-1,1]
dy = [1,-1,0,0]

# x = m y = n
n,m = map(int,input().split())
board = []
for i in range(m):
  board.append(list(input().rstrip()))
  
wval = 0
bval = 0
def dfs(x,y,cnt):
  temp = board[x][y]
  board[x][y] = 'a'
  for i in range(4):
    nx = dx[i] + x
    ny = dy[i] + y
    if (0<= nx < m) and (0 <= ny < n) and temp == board[nx][ny]:
      cnt = dfs(nx,ny,cnt+1)
  return cnt
  
for i in range(m):
  for j in range(n):
    if board[i][j] == 'W':
      wval += dfs(i,j,1) ** 2
    if board[i][j] == 'B':
      bval += dfs(i,j,1) ** 2

print(wval,bval)