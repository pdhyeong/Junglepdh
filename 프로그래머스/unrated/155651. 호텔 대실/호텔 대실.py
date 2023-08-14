import heapq
def solution(book_time):
    answer = 0 
    book_time.sort()
    heap = []
    heapq.heappush(heap,book_time[0][1])
    print(book_time)
    for i in range(1,len(book_time)):
        hour = int(heap[0].split(":")[0]) * 60
        minute = int(heap[0].split(":")[1]) + 10
        bookhour = int(book_time[i][0].split(":")[0]) * 60
        bookminute = int(book_time[i][0].split(":")[1])
        if (hour + minute) <= (bookhour + bookminute):
            heapq.heappop(heap)
        heapq.heappush(heap,book_time[i][1])
    return len(heap)