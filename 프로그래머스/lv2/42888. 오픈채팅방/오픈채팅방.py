def solution(record):
    answer = []
    idlist = {}
    for st in record:
        sentence = st.split(" ")
        if sentence[0] != 'Leave':
            idlist[sentence[1]] = sentence[2]
    for st in record:
        sentence = st.split(" ")
        if sentence[0] == "Enter":
            answer.append("{}님이 들어왔습니다.".format(idlist[sentence[1]]))
        elif sentence[0] == "Leave":
            answer.append("{}님이 나갔습니다.".format(idlist[sentence[1]]))
    return answer