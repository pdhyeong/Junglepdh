import sys

input = sys.stdin.readline

a,b = map(int,input().split())

fir = list(map(int,input().split()))
sec = list(map(int,input().split()))

print(len(set(fir) - set(sec)) + len(set(sec) - set(fir)))