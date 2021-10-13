from collections import deque
import sys
import copy

n= int(input())

#모든 노드에 대한 진입차수는 0으로 초기화
indegree=[0]*(n+1)
#각 노드에 연결된 간선 정보를 담기 위한 연결 리스트(그래프) 초기화
graph=[[] for i in range(n+1)]
#강의시간 초기화
time=[0]*(n+1)
#강의 시간과 그 강의를 듣기 위해 먼저 들어야 하는 강의들의 번호
for i in range(1,n+1):
    data=list(map(int,input().split()))
    time[i]=data[0]
    for e in data[1:-1]:
        indegree[i]+=1
        graph[e].append(i)

print("graph: ",graph)
print("indegree: ",indegree)
print("time: ",time)