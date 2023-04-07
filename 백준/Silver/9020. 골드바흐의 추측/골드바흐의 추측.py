import sys
import math

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

check = []
a = [False,False] + [True]*(10002)
pr = []

def prime(pd):
  for i in range(2,pd+1):
    if a[i]:
      pr.append(i)
      for j in range(2*i, pd+1,i):
        a[j] = False

for i in range(n):
  check.append(int(input()))

mx = max(check)
prime(mx)
for index in check:
  for i in range(2,int(index/2+1)):
    if a[i] == True and a[index - i] == True:
      s , e = i , (index-i)
  print(s,e)