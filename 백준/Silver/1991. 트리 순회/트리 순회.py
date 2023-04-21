import sys
 
N = int(sys.stdin.readline().strip())
graph = {}
 
for n in range(N):
    root, dest1, dest2 = sys.stdin.readline().strip().split()
    graph[root] = [dest1, dest2]
 
 
def preorder(root):
    if root != '.':
        print(root, end='')
        preorder(graph[root][0])  
        preorder(graph[root][1])  
 
 
def inorder(root):
    if root != '.':
        inorder(graph[root][0])
        print(root, end='')  
        inorder(graph[root][1])  
 
 
def postorder(root):
    if root != '.':
        postorder(graph[root][0])  
        postorder(graph[root][1])  
        print(root, end='')  
 
 
preorder('A')
print()
inorder('A')
print()
postorder('A')