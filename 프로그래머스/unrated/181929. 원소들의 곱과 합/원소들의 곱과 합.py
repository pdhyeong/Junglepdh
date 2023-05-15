def solution(num_list):
    answer = 0
    mul = 1
    for i in num_list:
        mul *= i
    if mul < sum(num_list)**2:
        answer = 1
    return answer