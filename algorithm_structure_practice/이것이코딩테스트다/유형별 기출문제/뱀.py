import sys

snake_direct_info=[]

#보드의 크기
n=int(input())
#사과의 개수
k=int(input())

game_map=[[0]*(n+1) for _ in range(n+1)]

#사과의 위치
for _ in range(k):
    x,y=map(int,input().split())
    game_map[x][y]=1


#뱀의 방향 변환 횟수
L=int(input())
#뱀의 방향 변환 정보
for i in range(L):
    x,c=input().split()
    snake_direct_info.append((int(x),c))

#방향 정보
#   R D L U
dx=[0,1,0,-1]
dy=[1,0,-1,0]

def turn(direction,c):
    if c == 'L':
        direction=(direction-1) %4
    else:
        direction=(direction+1) %4
    return direction

def simulate():
    #뱀의 머리 위치
    x,y=1,1
    #뱀이 존재하는 위치는 2로 표시
    game_map[x][y]=2
    #처음에는 동쪽을 바라봄
    direction=0
    #시작한 뒤에 지난 '초'시간 계산
    time=0
    #다음에 회전할 정보
    index=0
    #뱀이 차지하고 있는 위치 정보(꼬리가 앞쪽)
    q=[(x,y)]
    while True:
        nx=x+dx[direction]
        ny=y+dy[direction]
        #맵 범위 안에 있고, 뱀의 몸통이 없는 위치라면
        if 1<=nx and nx <=n and 1 <=ny and ny <=n and game_map[nx][ny]!=2:
            #사과가 없다면 이동후에 꼬리 제거
            if game_map[nx][ny] == 0:
                game_map[nx][ny] =2
                q.append((nx,ny))
                px,py=q.pop(0)
                game_map[px][py]=0
            #사과가 있다면 이동 후에 꼬리 그대로 두기
            if game_map[nx][ny]==1:
                game_map[nx][ny]=2
                q.append((nx,ny))
        #벽이나 뱀의 몸통과 부딪혔다면
        else:
            time +=1
            break
        #다음 위치로 머리 이동
        x,y=nx,ny
        time+=1
        #회전할 시간일 경우 회전
        if index < L and time == snake_direct_info[index][0]:
            direction = turn(direction,snake_direct_info[index][1])
            index+=1
    return time

print(simulate())