import sys
from itertools import permutations,combinations

input = sys.stdin.readline
while True:
  checklist = list(map(int,input().split()))
  if checklist[0] == 0:
    break
  inputlist = checklist[1:]
  com = list(combinations(inputlist,6))
  for i in range(len(com)):
    for j in range(len(list(com[i]))):
      print(com[i][j], end = " ")
    print()
  print()