import sys

input = sys.stdin.readline

n = int(input())
circles = []

for i in range(n):
  x, r = map(int, input().split())
  circles.append((x-r, '('))
  circles.append((x+r, ')'))

circles = sorted(circles, key= lambda x:(x[0], -ord(x[1])))

stack = []
answer = 1
for i in range(n*2):
  position, bracket = circles[i]
  if len(stack) == 0:
    stack.append({'pos':position,'bracket':bracket,'status':0})
    continue

  if bracket == ')':
    if stack[-1]['status'] == 0:
      answer +=1
    elif stack[-1]['status'] == 1:
      answer +=2
    stack.pop()
    if i != n*2-1:
      if circles[i+1][0] != position:
        stack[-1]['status'] = 0
  else:
    if stack[-1]['pos'] == position:
      stack[-1]['status'] = 1
      stack.append({'pos':position,'bracket':bracket,'status':0})
    else:
      stack.append({'pos':position,'bracket':bracket,'status':0})

print(answer)