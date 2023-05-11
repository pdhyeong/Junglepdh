import sys
input = sys.stdin.readline

n = int(input())


distance = list(map(int,input().split()))
station = list(map(int,input().split()))

mn = 1e9
result = distance[0] * station[0]
for i in range(1,len(distance)):
  mn = min(mn,station[i])
  result += (mn * distance[i])

print(result)