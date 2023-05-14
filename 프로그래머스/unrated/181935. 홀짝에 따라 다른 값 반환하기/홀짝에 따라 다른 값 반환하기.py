def solution(n):
    answer = 0
    if n & 1:
        for i in range(1,n+1):
            if i & 1:
                answer += i
    else:
        for i in range(1,n+1):
            if (i & 1) == 0:
                answer += i*i
    return answer