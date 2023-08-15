from itertools import permutations 

def solution(k, dungeons):
    answer = -1
    for dungeonlist in permutations(dungeons,len(dungeons)):
        cen = k
        cn = 0
        for dungeon in dungeonlist:
            if cen >= dungeon[0]:
                cn += 1
                cen -= dungeon[1]
        answer = max(cn,answer)
    return answer