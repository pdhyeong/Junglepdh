import sys
sys.setrecursionlimit(100000)

input = sys.stdin.readline
output = sys.stdout.write

'''오른쪽으로 탑을 짓고
오른쪽에서 왼쪽으로 신호를 전파한다.
그 신호는 자기 자신과 높이가 같거나 커야만 받을 수 있다.
그 신호를 처음으로 받는 인덱스의 위치를 반환
'''

'''
스택 만들어서 for문으로 스택에 뒤에서 부터 삽입하고
만약 안에 있는 스택의 값이 지금 현재의 검사하는 값보다 크다면 인덱스 번호를 삽입한다.
'''
n = int(input())
lst = list(map(int,input().split()))

stack = []
index = [0] * n
for i,num in enumerate(lst):
  while stack and stack[-1][1] <= num:
    stack.pop()

  if stack:
    index[i] = stack[-1][0]

  stack.append((i+1,num))
print(*index,end = " ")

