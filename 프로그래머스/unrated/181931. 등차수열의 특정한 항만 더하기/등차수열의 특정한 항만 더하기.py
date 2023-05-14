def solution(a, d, included):
    answer = a
    sum = 0
    for i in range(len(included)):
        if included[i]:
            sum += a
        a += d
    return sum