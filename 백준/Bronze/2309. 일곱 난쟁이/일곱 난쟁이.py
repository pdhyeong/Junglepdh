import sys

input = sys.stdin.readline
output = sys.stdout.write

list = []
for i in range(9):
  n = int(input())
  list.append(n)


for i in range(len(list)):
  for j in range(i+1,len(list)):
    if sum(list) - (list[i] + list[j]) == 100:
      list[i] = 0
      list[j] = 0

list.sort()
list = list[2:]
for i in range(len(list)):
  print(list[i])