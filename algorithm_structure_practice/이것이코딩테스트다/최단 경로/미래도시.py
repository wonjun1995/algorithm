import sys

INF=int(1e9)

n,m = list(map(int,sys.stdin.readline().split()))

#2차원 리스트를 만들고, 모든 값을 무한으로 초기화
graph=[[INF] * (n+1) for _ in range(n+1)]

#자기 자신에서 자기 자신으로 가는 비용은 0으로 초기화
for a in range(1,n+1):
    for b in range(1,n+1):
        if a==b:
            graph[a][b]=0
 
for _ in range(m):
    a,b=list(map(int,sys.stdin.readline().split()))
    graph[a][b]=1
    graph[b][a]=1

#거쳐갈 노드와 마지막에 들릴 노드
#k : 거쳐갈 노드
#x : 마지막에 들릴 노드
x,k=list(map(int,sys.stdin.readline().split()))

#점화식에 따라 플로이드 워셜 알고리즘 수행
for k in range(1,n+1):
    for a in range(1,n+1):
        for b in range(1,n+1):
            graph[a][b]=min(graph[a][b],graph[a][k]+graph[k][b])

#수행된 결과를 출력
distance=graph[1][k] + graph[k][x]

if distance==INF:
    print("INFINITY",end=' ')
else:
    print(distance)


