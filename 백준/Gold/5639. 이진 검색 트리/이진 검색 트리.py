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


def postorder(graph):
  if len(graph) == 0:
    return
  left,right = [],[]
  root = graph[0]
  for node in graph:
    if node < root:
      left.append(node)
    elif node > root:
      right.append(node)

  postorder(left)
  postorder(right)
  print(root)

postorder(graph)