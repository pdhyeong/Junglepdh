import sys
input = sys.stdin.readline
n = int(input())
t = []
cost = []
dp = [0] * (n*2)
result = 0
for i in range(n):
  a,b = map(int,input().split())
  t.append(a)
  cost.append(b)

for i in range(n-1,-1,-1):
  time = t[i] + i
  if time <= n:
    dp[i] = max(result,cost[i] + dp[time])
    result = dp[i]
  else:
    dp[i] = result

print(dp[0])