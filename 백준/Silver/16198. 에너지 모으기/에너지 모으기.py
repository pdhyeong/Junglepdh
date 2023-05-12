import sys
input = sys.stdin.readline
n = int(input())
w = list(map(int, input().split()))
answer = 0

def back_tacking(x):
    global answer

    if len(w) == 2:
        answer = max(answer, x)
        return

    for i in range(1, len(w) - 1):
        target = w[i - 1] * w[i + 1] 

        v = w.pop(i) 
        back_tacking(x + target) 
        w.insert(i, v) 

back_tacking(0)
print(answer)