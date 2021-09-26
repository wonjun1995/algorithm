import sys

arr1=[1,3,5]
arr2=[2,4,6,8]

result=[0]*(len(arr1)+len(arr2))

i=0
j=0
k=0

#모든 원소가 결과 리스트에 담길때까지 반복
while (i < len(arr1)) or(j < len(arr2)):
    #i가 arr1의 길이보다 작고 arr[i]가 arr2[j]보다 작거나 j가 arr2의 길이보다 작을 때 result[k]에 arr[1]을 삽입
    if (i<len(arr1) and arr1[i]<=arr2[j]) or j >=len(arr2):
        result[k]=arr1[i]
        i+=1
    #아니면 arr2[j] 삽입
    else:
        result[k]=arr2[j]
        j+=1
    k+=1

print(result)