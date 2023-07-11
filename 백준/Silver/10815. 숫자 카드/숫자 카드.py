import sys

input = sys.stdin.readline

fir = int(input())
firlist = list(map(int,input().split()))
sec = int(input())
seclist = list(map(int,input().split()))

firlist.sort()

for i in seclist:
  left = 0
  right = len(firlist)-1
  flag = 0
  while left <= right:
    mid = (left + right) // 2
    if firlist[mid] == i:
      print(1,end = " ")
      flag = 1
      break
    elif firlist[mid] < i:
      left = mid + 1
    else:
      right = mid -1
  if flag:
    continue
  print(0, end = " ")