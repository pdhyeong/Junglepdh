import sys
input = sys.stdin.readline

n,pay = map(int,input().split())

coin = []
for i in range(n):
  k = int(input())
  coin.append(k)

result = 0 
coin.sort(reverse=True)

for co in coin:
  result += pay // co
  pay = pay % co

print(result)