import sys
input = sys.stdin.readline

st = input().rstrip()

se = st.split('-')
for i in range(len(se)):
  if '+' in se[i]:
    newlst = se[i].split('+')
    sm = 0
    for st in newlst:
        sm += int(st)
    se[i] = sm
  else:
    se[i] = int(se[i])

result = se[0]
for i in range(1,len(se)):
  result -= se[i]

print(result)