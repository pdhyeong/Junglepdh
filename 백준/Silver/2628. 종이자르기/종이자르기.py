import sys
import math

input = sys.stdin.readline
output = sys.stdout.write

r,c = map(int,input().split())

cnt = int(input())

rlist = [0]
clist = [0]

for i in range(cnt):
  direct, coor = map(int,input().split())
  if direct == 1:
    rlist.append(coor)
  elif direct == 0:
    clist.append(coor)

rlist.sort()
clist.sort()

rlist.append(r)
clist.append(c)

subclist = []
subrlist = []
for i in range(1,len(clist)):
  subclist.append(clist[i]-clist[i-1])
for i in range(1,len(rlist)):
  subrlist.append(rlist[i]-rlist[i-1])

output(str(max(subclist) * max(subrlist)))
