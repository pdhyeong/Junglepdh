import sys
input = sys.stdin.readline

test = int(input())

for t in range(test):
  human = []
  n = int(input())
  for i in range(n):
    document,interview = map(int,input().split())
    human.append([document,interview])

  human.sort()
  min = human[0][1]
  result = 0
  for j in range(len(human)):
    if human[j][1] < min:
      min = human[j][1]
      result += 1
      
  print(result+1)