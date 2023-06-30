import sys

input = sys.stdin.readline

a,b = map(int,input().split())

alist = list(map(int,input().split()))
blist = list(map(int,input().split()))

clist = alist + blist
clist.sort()

for data in clist:
  print(data , end= " ")