from itertools import permutations

def isPrimeNumber(x):
    if x < 2:
        return False
    for i in range(2,int((x**0.5))+1):
        if x % i == 0:
            return False
    return True
    
def solution(numbers):
    answer = 0
    arr = []
    for i in range(len(numbers)):
        arr.append(numbers[i])
    s4 = set()
    for i in range(1,len(numbers)+1):
        for j in permutations(arr, i):
            s = ""
            for st in list(j):
                s += st
            s4.add(int(s))
    s4 = list(s4)
    for i in range(len(s4)):
        if isPrimeNumber(s4[i]):
            answer+=1
    return answer