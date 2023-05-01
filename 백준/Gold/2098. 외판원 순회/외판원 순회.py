import sys

N = 0
Answer_Bit = 0
MAX = 16
INF = 987654321
MAP = [[0 for j in range(MAX)] for i in range(MAX)]
Cost = [[-1 for j in range(1 << MAX)] for i in range(MAX)]

def Min(A, B):
    if A < B:
        return A
    return B

def DFS(Cur_Node, Cur_Bit):
    global N, MAP, Cost, Answer_Bit

    if Cur_Bit == Answer_Bit:
        if MAP[Cur_Node][0] == 0:
            return INF
        else:
            return MAP[Cur_Node][0]

    if Cost[Cur_Node][Cur_Bit] != -1:
        return Cost[Cur_Node][Cur_Bit]
    Cost[Cur_Node][Cur_Bit] = INF
    
    for i in range(N):
        if MAP[Cur_Node][i] == 0:
            continue
        if (Cur_Bit & (1 << i)) == (1 << i):
            continue
        
        Cost[Cur_Node][Cur_Bit] = Min(Cost[Cur_Node][Cur_Bit], MAP[Cur_Node][i] + DFS(i, Cur_Bit | 1 << i))
    return Cost[Cur_Node][Cur_Bit]

def Solution():
    global N, MAP, Cost

    Cost = [[-1 for j in range(1 << MAX)] for i in range(MAX)]
    print(DFS(0, 1))

def Input():
    global N, MAP, Answer_Bit

    N = int(input())
    for i in range(N):
        MAP[i] = list(map(int, input().split()))
    Answer_Bit = (1 << N) - 1

def Solve():
    Input()
    Solution()

if __name__ == "__main__":
    # sys.stdin = open("Input.txt", "r")
    Solve()
