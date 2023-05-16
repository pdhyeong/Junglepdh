def solution(my_string):
    answer = []
    a = ''
    b = ''
    for i in range(len(my_string)):
        answer.append(my_string[i:])
        
    answer.sort()
    return answer