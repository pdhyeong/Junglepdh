def solution(my_string, overwrite_string, s):
    answer = ''
    le = len(my_string)-s-len(overwrite_string)
    if le:
        answer = my_string[:s] + overwrite_string + my_string[s+len(overwrite_string):]
    else:
        answer = my_string[:s]+overwrite_string
    return answer