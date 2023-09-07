def solution(s):
    answer = ''
    st = s.split(' ')
    st.sort()
    mini = int(st[0])
    maxi = int(st[0])
    for i in range(len(st)):
        mini = min(int(st[i]),mini)
        maxi = max(int(st[i]),maxi)
    answer += str(mini) + ' ' + str(maxi)
    return answer