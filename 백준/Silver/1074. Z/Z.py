import sys

input = sys.stdin.readline
output = sys.stdout.write

def z(n,r,c):
  if n == 0:
    return 0
  half = 1 <<(n-1)

  if r < half and c < half:
    return z(n-1,r,c)
  elif r < half and c >= half:
    return half * half + z(n-1,r,c-half)
  elif r >= half and c < half: 
    return 2 * half * half + z(n-1,r-half,c)
  return 3 * half * half + z(n-1,r-half,c-half)

n,r,c = map(int,input().split())
output(str(z(n,r,c)))