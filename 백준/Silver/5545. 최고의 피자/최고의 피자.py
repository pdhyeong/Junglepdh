import sys
sys.setrecursionlimit(10 ** 6)

n = int(input())
a,b = map(int,input().split())
dou = int(input())
pr = []
for i in range(n):
  price = int(input())
  pr.append(price)

pr.sort(reverse=True)

increkal = 0
result = dou // a
for i in range(n):
  increkal += pr[i]
  pizzaprice = a + b * (i+1)
  result = max(result,(dou+increkal)//pizzaprice)

print(result)