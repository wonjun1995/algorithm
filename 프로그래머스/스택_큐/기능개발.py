import sys

#기능개발

progresses=[93, 30, 55]
speeds=[1, 30, 5]

def solution(progresses, speeds):
    answer = []
    day=0
    count=0
    while len(progresses) > 0:
        if (progresses[0] + (speeds[0] * day)) >= 100:
            progresses.pop(0)
            speeds.pop(0)
            count += 1
        else:
            if count > 0:
                answer.append(count)
                count=0
            day += 1
    answer.append(count)
    return answer

print(solution(progresses, speeds))

#다른 사람의 풀이

def other_solution(progresses, speeds):
    Q=[]
    for p, s in zip(progresses, speeds):
        if len(Q)==0 or Q[-1][0]<-((p-100)//s):
            Q.append([-((p-100)//s),1])
        else:
            Q[-1][1]+=1
    return [q[1] for q in Q]