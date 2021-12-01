import sys

array=[1, 5, 2, 6, 3, 7, 4]
commands=[[2, 5, 3], [4, 4, 1], [1, 7, 3]]

def solution(array, commands):
    answer = []
    for list in commands:
        value=array[list[0]-1:list[1]]
        value.sort()
        answer.append(value[list[2]-1])
    return answer

print(solution(array, commands))

#다른 사람의 풀이
# 람다 표현식으로 해결

def other_solution(array, commands):
    return list(map(lambda x:sorted(array[x[0]-1:x[1]])[x[2]-1], commands))

print(other_solution(array, commands))