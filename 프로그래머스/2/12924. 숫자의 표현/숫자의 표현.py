def solution(n):
    count = 0  
    for i in range(1, n + 1):
        total = 0
        j = i
        while total < n:
            total += j
            j += 1
        if total == n:
            count += 1
    return count
