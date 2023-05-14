import sys
input = sys.stdin.readline
t = int(input())

for i in range(t):
  stick,ant = map(int,input().split())
  mxresult = 0
  mnresult = 0
  for j in range(ant):
    coor = int(input())
    mxresult = max(min(coor,stick-coor),mxresult)
    mnresult = max(max(coor,stick-coor),mnresult)
  print(mxresult,mnresult)