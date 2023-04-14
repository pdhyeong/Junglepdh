import sys
sys.setrecursionlimit(100000)

input = sys.stdin.readline
output = sys.stdout.write

n,m = map(int,input().split())
lst = list(map(int,input().split()))

cnt = 0
def back(i, sm):
    global cnt
    if i+1 > n:
        return
    sm += lst[i]
    if sm == m:
        cnt += 1
    back(i+1, sm)
    back(i+1, sm - lst[i])

back(0, 0)
print(cnt)