import sys
input = sys.stdin.readline

t = int(input())

for i in range(t):
  st = input().rstrip()
  n = int(input())
  lst = input()
  dcount = st.count('D')
  if dcount > n:
    print("error")
    continue
  if n >= 1:
    lst = lst[1:-2]
    lst = lst.split(',')
    lst = list(map(int,lst))
  else:
    lst = []
  left = 0
  right = n-1
  ro = 0
  result = []
  for j in range(len(st)):
    if st[j] == 'R':
      ro += 1
    if ro & 1 and st[j] == 'D':
      right -= 1
    elif (ro & 1) == 0 and st[j] == 'D':
      left += 1
  if left-right == 1:
    print("[]")
    continue
  elif left - right == 0:
    result.append(lst[left])
  elif left - right > 1:
    print("error")
    continue
  else:
    if ro & 1:
      for rindex in range(right,left-1,-1):
        result.append(lst[rindex])
    else:
      for lindex in range(left,right+1):
        result.append(lst[lindex])
  print(str(result).replace(', ',','))