import sys

# N개의 부품이 매장에 있음
n=int(sys.stdin.readline().rstrip())
array=list(map(int,sys.stdin.readline().split()))

#손님이 찾는 부품의 갯수
m=int(sys.stdin.readline().rstrip())
sub_array=list(map(int,sys.stdin.readline().split()))

def binary_search(array,target,start,end):
    if start > end:
        return None
    mid=(start+end)//2
    if array[mid]==target:
        return mid
    elif array[mid] < target:
        return binary_search(array,target,mid+1,end)
    elif array[mid] > target:
        return binary_search(array,target,start,mid-1)

for i in sub_array:
    result=binary_search(array,i,0,n-1)
    if result != None:
        print("yes",end=' ')
    else:
        print("no",end=' ')