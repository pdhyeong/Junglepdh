import sys

input = sys.stdin.readline

num = int(input())
savenum = 0
for i in range(1,num+1):
  temp = i
  sum = i
  while temp != 0:
    sum += temp % 10
    temp //= 10
  if sum == num:
    savenum = i
    break
print(savenum)