# N X M 크기의 얼음 틀이 있음.
# 구멍이 뚫려 있는 부분은 0 ,칸막이가 존재하는 부분은 1로 표시
# 구멍이 뚫려있는 부분끼리 상,하,좌,우로 붙어 있는 경우 서로 연결되어 있는 것으로 간주함.

import sys

#N,M 크기 설정
n,m=map(int,sys.stdin.readline().split())

graph=[]
for i in range(n):
    graph.append(list(map(int,sys.stdin.readline().rstrip())))

def dfs(x,y):
    #범위 설정
    if x<0 or y<0 or x>=n or y >=m:
        return False
    #아직 방문하지 않았다면
    if graph[x][y]==0:
        #방문으로 표시
        graph[x][y]==1
        #상하좌우의 위치도 모두 재귀적 호출
        dfs(x-1,y)
        dfs(x+1,y)
        dfs(x,y+1)
        dfs(x,y-1)
        return True
    return False

#모든 노드(위치)에 대하여 음료수 채우기
reuslt=0
for i in range(n):
    for j in range(m):
        if dfs(i,j)== True:
            reuslt+=1

print(reuslt)


#def 메서드 정의
def dfs_sample(graph,v,visited):
    #현재 노드를 방문 처리
    visited[v]=True
    print(v,end=' ')
    #현재 노드와 연결된 다른 노드를 재귀적으로 방문
    for i in graph[v]:
        if not visited[i]:
            dfs(graph,i,visited)