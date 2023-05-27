import sys
input = sys.stdin.readline

n = int(input())
lst = []
dp = [[[0] * n for _ in range(n)]for i in range(3)] 
for i in range(n):
  lst.append(list(map(int,input().split())))

dp[0][0][1] = 1
for i in range(2, n):
    if lst[0][i] == 0:
        dp[0][0][i] = dp[0][0][i - 1]

for r in range(1, n):
    for c in range(1, n):
      if lst[r][c] == 0 and lst[r][c - 1] == 0 and lst[r - 1][c] == 0:
          dp[1][r][c] = dp[0][r - 1][c - 1] + dp[1][r - 1][c - 1] + dp[2][r - 1][c - 1]
          
  # 가로, 세로 파이프를 추가하는 과정
      if lst[r][c] == 0:
          dp[0][r][c] = dp[0][r][c - 1] + dp[1][r][c - 1]
          dp[2][r][c] = dp[2][r - 1][c] + dp[1][r - 1][c]
  
  
    cnt = sum(dp[i][n - 1][n - 1] for i in range(3))

print(cnt)