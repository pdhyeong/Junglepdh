import sys

input = sys.stdin.readline
output = sys.stdout.write
n = int(input())

list = []
for i in range(n):
  k = int(input())
  list.append(k)

list.sort()

for i in range(n):
  output(str(list[i]))
  print()