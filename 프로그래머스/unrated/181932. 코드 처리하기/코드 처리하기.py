def solution(code):
    answer = ''
    mode = 0
    ret = ''
    for i in range(len(code)):
        if mode == 0:
            if code[i] != '1':
                if (i&1) == 0:
                    ret += code[i]
            else:
                mode = 1
        elif mode == 1:
            if code[i] !='1':
                if i & 1:
                    ret += code[i]
            else:
                 mode = 0
    if len(ret):
        return ret
    else:
        return "EMPTY"