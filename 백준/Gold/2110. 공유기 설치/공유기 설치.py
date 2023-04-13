import sys
sys.setrecursionlimit(100000)

input = sys.stdin.readline
output = sys.stdout.write

n,m = map(int,input().split())
lst1 = []
for i in range(n):
  k = int(input())
  lst1.append(k)

lst1.sort()

start = 1;
end = lst1[n - 1] - lst1[0];
result = 0;

while start <= end:
  mid = (start + end) // 2;
  value = lst1[0];
  cnt = 1;

  for i in range(1,n):
    if lst1[i] >= value + mid:
      value = lst1[i];
      cnt += 1;

  if cnt >= m:
    start = mid + 1;
    result = mid;
  else :
    end = mid - 1;

print(result)