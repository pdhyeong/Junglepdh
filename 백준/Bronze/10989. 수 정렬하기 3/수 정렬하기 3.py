import sys

input = sys.stdin.readline
output = sys.stdout.write
n = int(input())

list = []
ak = [0] * 10001
for i in range(n):
  k = int(input())
  ak[k]+=1

for i in range(1,10001):
  for j in range(0,ak[i]):
    print(i)