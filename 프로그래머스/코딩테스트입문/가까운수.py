def solution(array, n):
    answer = 0
    array.sort()
    temp =[]
    for i in array:
        temp.append(abs(n-i))
    print(temp)
    answer = array[temp.index(min(temp))]
    return answer

# n이 10이면 5, 15도 같기 때문에 array 정렬을 먼저 하고 찾아야 함.