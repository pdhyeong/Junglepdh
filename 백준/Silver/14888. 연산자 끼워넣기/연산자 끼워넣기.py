import sys
sys.setrecursionlimit(10**5)
input = sys.stdin.readline

n = int(input()) 

numlist = list(map(int,input().split()))
operator = list(map(int,input().split()))

maxi = -1e9
mini = 1e9

def dfs(k,total,plus,minus,mul,di):
  global maxi,mini
  if k == n:
    maxi = max(maxi,total)
    mini = min(mini,total)
    return 
  if plus:
    dfs(k+1,total+numlist[k],plus-1,minus,mul,di)
  if minus:
    dfs(k+1,total-numlist[k],plus,minus-1,mul,di)
  if mul:
    dfs(k+1,total*numlist[k],plus,minus,mul-1,di)
  if di:
    dfs(k+1,int(total/numlist[k]),plus,minus,mul,di-1)

dfs(1,numlist[0],operator[0],operator[1],operator[2],operator[3])
print(maxi)
print(mini)
