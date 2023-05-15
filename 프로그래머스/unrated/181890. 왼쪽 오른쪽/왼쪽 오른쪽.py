def solution(str_list):
    answer = []
    check = 0
    im = 0
    for i in range(len(str_list)):
        if str_list[i] == 'l':
            check = i
            im = 1
            break
        if str_list[i] == 'r':
            check = i
            im = 2
            break
    if im == 1:
        for i in range(check):
            answer.append(str_list[i])
    if im == 2:
        for i in range(check+1,len(str_list)):
            answer.append(str_list[i])
    return answer