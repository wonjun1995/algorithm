import sys

array=[7,5,9,0,3,1,6,2,4,8]

def quick_sort(array,start,end):
    #원소가 1개인 경우 종료
    if start >=end:
        return
    #피벗은 첫번째 원소
    pivot=start
    left=start+1
    right=end
    while left <= right:
        #피벗보다 큰 데이터를 찾을 때까지 반복
        while left <=end and array[left] <= array[pivot]:
            left+=1
        #피벗보다 작은 데이터를 찾을 때까지 반복
        while right > start and array[right] >= array[pivot]:
            right-=1
        #엇갈렸다면 작은 데이터와 피벗을 교체
        if left > right:
            array[right],array[pivot]=array[pivot],array[right]
        #엇갈리지 않았다면 작은 데이터와 큰데이터를 교체
        else:
            array[left],array[right]=array[right],array[left]
        print(array)
    #분할 이후 왼쪽 부분과 오른쪽 부분에서 각각 정렬 수행
    quick_sort(array,start,right-1)
    quick_sort(array,right+1,end)


quick_sort(array,0,len(array)-1)
print( "최종: ",array)

def python_quickSort(array):
    #리스트가 하나 이하의 원소만을 담고 있다면 종료
    if len(array) <= 1:
        return array
    
    pivot=array[0]
    tail=array[1:]

    left_side=[x for x in tail if x <= pivot]
    right_side=[x for x in tail if x > pivot]
