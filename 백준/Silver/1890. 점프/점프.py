import sys
input = sys.stdin.readline

n = int(input())

board = []
dp = [[0] * (n) for _ in range(n)]
dp[0][0] = 1
for i in range(n):
  board_data = list(map(int,input().split()))
  board.append(board_data)

for i in range(n):
  for j in range(n):
    if i == n - 1 and j == n - 1:
        print(dp[i][j])
        break
    if j + board[i][j] < n:
      dp[i][j + board[i][j]] += dp[i][j]

    if i + board[i][j] < n:
      dp[i + board[i][j]][j] += dp[i][j]