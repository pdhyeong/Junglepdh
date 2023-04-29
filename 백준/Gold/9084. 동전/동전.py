import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**6)
n = int(input())
while n != 0:
  coincnt = int(input())
  coin = list(map(int,input().split()))
  pay = int(input())
  dp = [0] * (pay+1)
  dp[0] = 1
  for i in coin:
    for j in range(1,pay+1):
      if j >= i:
        dp[j] = dp[j] + dp[j-i]
  print(dp[pay])
  n -= 1