def solution(arr, queries):
    for i in range(len(arr)):
        for j in range(len(queries)):
            if queries[j][0] <= i <= queries[j][1]:
                arr[i] = arr[i] + 1
    return arr