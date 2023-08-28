from itertools import permutations 

def solution(k, dungeons):
    answer = 0
    for sequence in permutations(dungeons,len(dungeons)):
        remander = k
        mx = 0
        for data in sequence:
            if remander >= data[0]:
                remander -= data[1];
                mx += 1
        answer = max(mx,answer)
    return answer