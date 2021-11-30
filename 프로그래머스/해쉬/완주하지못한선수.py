import sys

def solution(participant, completion):
    #sorting해서 루프 돌림.
    participant.sort()
    completion.sort()
    #루프 돌리면서 없으면 반환
    for i in range(len(completion)):
        if participant[i] != completion[i]:
            return participant[i]
    return participant[len(participant)-1]
    #루프가 다 돌았는데 없으면 맨 마지막이 완주 못함.

participant=["leo", "kiki", "eden"]
completion=["eden", "kiki"]


print(solution(participant, completion))


#다른 사람의 풀이

import collections

def other_solution(participant, completion):
    #1. participant의 Counter 구함.
    #2. completion의 Counter 구함.
    #3. 둘의 차를 구하면 정답만 남아있는  counter를 반환
    #4. counter의 Key값을 반환.
    answer = collections.Counter(participant) - collections.Counter(completion)
    return list(answer.keys())[0]

print(other_solution(participant, completion))
