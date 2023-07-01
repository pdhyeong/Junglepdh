import sys

input = sys.stdin.readline

str = input().rstrip()
compstr = input().rstrip()
last = compstr[-1]
stk = []
for i in str:
  stk.append(i)
  if "".join(stk[-len(compstr):]) == compstr:
    for j in range(len(compstr)):
      stk.pop()

if len(stk) == 0:
  print("FRULA")
else:
  print("".join(stk))