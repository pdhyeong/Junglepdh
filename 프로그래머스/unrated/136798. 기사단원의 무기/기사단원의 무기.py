import math
def prime(n, limit , power):
    cnt = 0
    for i in range(1, int(math.sqrt(n))+1):
        if n%i == 0:
            if i == n//i:
                cnt += 1
            else:
                cnt += 2 
    return cnt

def solution(number, limit, power):
    total = 0
    for i in range(1,number+1):
        cds = prime(i, limit, power)
        if cds > limit:
            cds = power
        total += cds
    return total
