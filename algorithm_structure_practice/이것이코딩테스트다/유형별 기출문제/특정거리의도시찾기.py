import sys
from collections import deque


n,m,k,x=map(int,sys.stdin.readline().split())
graph=[[] for _ in range((n+1))]

for i in range(m):
    start,end=map(int,sys.stdin.readline().split())
    graph[start].append(end)

#최단 거리 테이블을 모두 무한으로 초기화
distance = [-1] * (n+1)
distance[x]=0

q=deque([x])
while q:
    now=q.popleft()
    for i in graph[now]:
        if distance[i] == -1:
            distance[i]=distance[now]+1
            q.append(i)

check=False
for i in range(1,n+1):
    if distance[i] == k:
        print(i)
        check=True

if check == False:
    print(-1)



