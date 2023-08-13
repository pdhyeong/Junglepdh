def solution(name, yearning, photo):
    answer = []
    scorelist = dict()
    for i in range(len(name)):
        scorelist[name[i]] = yearning[i]
        
    for i in range(len(photo)):
        nums = 0
        for j in range(len(photo[i])):
            if photo[i][j] in scorelist:
                nums += scorelist[photo[i][j]]
            else:
                nums += 0
        answer.append(nums)
    return answer