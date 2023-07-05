import sys
sys.setrecursionlimit(300000)
from itertools import permutations

input = sys.stdin.readline

n = int(input())

temp = []
for i in range(1,n+1):
  temp.append(i)
per = list(permutations(temp,n))
for i in range(len(per)):
  for j in range(len(list(per[i]))):
    print(per[i][j],end=" ")
  print()