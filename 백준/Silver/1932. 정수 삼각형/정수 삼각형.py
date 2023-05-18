n = int(input())
hr = [[0] * (n+1) for i in range(n)]

for i in range(n):
    line = list(map(int, input().split()))
    for j in range(i+1):
        hr[i][j] = line[j]

for i in range(1, n):
    for j in range(i+1):
        hr[i][j] += max(hr[i-1][j-1] if j > 0 else 0, hr[i-1][j])

result = max(hr[n-1])
print(result)
