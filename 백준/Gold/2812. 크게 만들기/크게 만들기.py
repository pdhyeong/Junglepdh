import sys
sys.setrecursionlimit(100000)

input = sys.stdin.readline
output = sys.stdout.write

n,m = map(int,input().split())
num = input().rstrip()

stack = []

def sol(number,k):
  for i, num in enumerate(number):
    while len(stack) > 0 and stack[-1] < num and k > 0:
      stack.pop()
      k -= 1
    stack.append(num)
  return ''.join(stack[:len(stack)-k])
  
print(sol(num,m))