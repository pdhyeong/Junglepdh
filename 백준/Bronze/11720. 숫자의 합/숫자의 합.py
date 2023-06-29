import sys

input = sys.stdin.readline

n = int(input())
s = input().rstrip()
sum = 0
for i in range(len(s)):
  sum += int(s[i])

print(sum)