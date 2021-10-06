# N X M 크기의 사각형 형태의 미로
# 괴물이 있는 부분은 0
# 괴물이 없는 부분은 1

from collections import deque
import sys

#N,M 크기 설정
n,m=map(int,sys.stdin.readline().split())

graph=[]
for i in range(n):
    graph.append(list(map(int,sys.stdin.readline().rstrip())))

# 이동할 네 방향 정의 (상하좌우)
dx=[-1,1,0,0]
dy=[0,0,-1,1]

def bfs(x,y):
    queue=deque()
    queue.append((x,y))
    #큐가 빌 때까지 반복
    while queue:
        x,y=queue.popleft()
        #현재 위치에서 네 방향으로의 위치 확인
        for i in range(4):
            nx=x+dx[i]
            ny=y+dy[i]
            #미로 찾기 공간을 벗어난 경우 무시
            if nx < 0 or ny < 0 or nx>=n or ny >=m:
                continue
            #벽인 경우 무시
            if graph[nx][ny]==0:
                continue
            #해당 노드를 처음 방문하는 경우에만 최단거리기록
            if graph[nx][ny]==1:
                graph[nx][ny] = graph[x][y]+1
                queue.append((nx,ny))
    return graph[n-1][m-1]

#BFS를 수행한 결과 출력
print(bfs(0,0))




def bfs_sample(graph,start,visited):
    #큐(Queue) 구현을 위해 deque 라이브러리 사용
    queue=deque()
    #현재 노드를 방문 처리
    visited[start]=True
    #큐가 빌 때까지 반복
    while queue:
        #큐에서 하나의 원소를 뽑아 출력
        v=queue.popleft()
        print(v,end=' ')
        #해당 원소와 연결된, 아직 방문하지 않은 원소들을 큐에 삽입
        for i in graph[v]:
            if not visited[i]:
                queue.append(i)
                visited[i]=True