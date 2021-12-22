import sys

numbers=[1,1,1,1,1]
target=3

def solution(numbers,target):
    answer=0
    result=[0]

    for i in numbers:
        tmp=[]
        for parent in result:
            tmp.append(parent+i)
            tmp.append(parent-i)
        result=tmp
    for num in result:
        if num == target:
            answer+=1
    return answer

print(solution(numbers,target))