import sys

array=[7,5,9,0,3,1,6,2,4,8]

for i in range(1,len(array)):
    #인덱스 i부터 1씩 감소하여 반복
    for j in range(i,0,-1):
        #j가 j-1보다 작으면 한 칸씩 왼쪽으로 이동
        if array[j] < array[j-1]:
            array[j],array[j-1]=array[j-1],array[j]
        else:
            break

print(array)