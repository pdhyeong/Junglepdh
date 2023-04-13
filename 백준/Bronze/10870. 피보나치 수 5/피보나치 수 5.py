import sys
sys.setrecursionlimit(100000)

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

def func(k):
  if k == 0:
    return 0
  if k == 1 or k == 2:
    return 1
  return func(k-1) + func(k-2)

print(func(n))