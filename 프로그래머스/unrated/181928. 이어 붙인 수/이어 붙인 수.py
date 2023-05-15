def solution(num_list):
    answer = 0
    hol = ''
    jjack = ''
    for i in num_list:
        if i & 1:
            hol += str(i)
        else:
            jjack += str(i)
            
    return int(hol) + int(jjack)