import sys

input = sys.stdin.readline

n = input().rstrip();

if n[1]  == 'x':
  print(int(n,16))
elif n[0] == '0':
  print(int(n,8))
else:
  print(int(n))