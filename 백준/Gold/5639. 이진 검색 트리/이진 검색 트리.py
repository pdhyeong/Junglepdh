import sys
sys.setrecursionlimit(100000)
input = sys.stdin.readline

graph = []
while True:
  try:
    k = int(input())
    graph.append(k)
  except:
    break


def postorder(left,right):
  if left > right:
    return
  mid = right + 1
  for i in range(left,right+1):
    if graph[i] > graph[left]:
      mid = i
      break
  postorder(left+1,mid-1)
  postorder(mid,right)
  print(graph[left])
  
postorder(0,len(graph)-1)