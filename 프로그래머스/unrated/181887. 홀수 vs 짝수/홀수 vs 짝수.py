def solution(num_list):
    a = 0
    b = 0
    for i in range(len(num_list)):
        if i & 1:
            a +=  num_list[i]
        else:
            b += num_list[i]
    return max(a,b)