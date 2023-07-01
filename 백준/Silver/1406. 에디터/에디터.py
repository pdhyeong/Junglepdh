import sys

input = sys.stdin.readline

str = input().rstrip()

n = int(input())
stk = list(str)
stk2 = []
for i in range(n):
  command = input().rstrip()
  if command[0] == 'P':
    pushstr = command[2]
    stk.append(pushstr)
  elif command[0] == 'L':
    if stk:
      stk2.append(stk.pop())
  elif command[0] == 'D':
    if stk2:
      stk.append(stk2.pop())
  else:
    if stk:
      stk.pop()
result = "".join(stk + list(reversed(stk2)))
print(result)