import sys

input = sys.stdin.readline

cardnum, limit = map(int,input().split())

cardlist = list(map(int,input().split()))
sumval = 0
realval = 0
for i in range(len(cardlist)):
  for j in range(i+1,len(cardlist)):
    for k in range(j+1,len(cardlist)):
      sumval = cardlist[i] + cardlist[j] + cardlist[k]
      if limit >= sumval :
        realval = max(realval,sumval)

print(realval)