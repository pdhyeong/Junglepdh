from collections import deque
def solution(maps):
    answer = 0
    dx = [1,-1,0,0]
    dy = [0,0,1,-1]
    q = deque()
    q.append((0,0,1))
    def bfs(x,y):
        result = 0
        while q:
            mx,my,result = q.popleft()
            if mx == len(maps)-1 and my == len(maps[0])-1:
                return result
            for i in range(4):
                nx = mx + dx[i]
                ny = my + dy[i]
                if 0<= nx < len(maps) and 0<= ny < len(maps[0]) and maps[nx][ny] == 1:
                    maps[nx][ny] = 0
                    q.append((nx,ny,result+1))
        return -1
    return bfs(0,0)