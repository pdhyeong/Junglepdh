import heapq
import sys

input = sys.stdin.readline
ouput = sys.stdout.write

n = int(input())
road = []

for _ in range(n):
  road_data = list(map(int,input().split()))
  road.append(sorted(road_data))

road.sort(key=lambda x:x[1])

distance = int(input())

setroad = []
for data in road:
  house, office = data
  if abs(house-office) <= distance:
    setroad.append((house,office))


'''
heap에 머리에 있는 작은 데이터 부터 비교해줄 것인데
범위에 포함되는 것들만 넣어주고 아닌 것들은 heap에서 제거 해줘야한다.


'''
answer = 0
heap = []
for dis_data in setroad:
  if len(heap) == 0:
    heapq.heappush(heap,dis_data)
  else:
    while heap[0][0] < dis_data[1] - distance:
      heapq.heappop(heap)
      if len(heap) == 0:
        break
    heapq.heappush(heap,dis_data)
  answer = max(answer,len(heap))
print(answer)