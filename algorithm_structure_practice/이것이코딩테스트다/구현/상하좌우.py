import sys

# N X N 지도 생성
# L R U D 방향키 옵션 생성
# 범위 벗어나면 무시

n=int(sys.stdin.readline().rstrip())

x=1
y=1

# L R U D
# -1 1 0 0
# 0 0 -1 1

move_type=['L','R','U','D']
nx=[-1,1,0,0]
ny=[0,0,-1,1]

moves=sys.stdin.readline().split()

for type in range(len(moves)):
    #문제점 : x,y가 1부터 시작하기 떄문에 새로운 변수를 만들어 범위 조건을 확인해야 할 필요가 있음.
    for i in range(len(move_type)):
        if moves[type] == move_type[i]:
            dx=x+nx[i]
            dy=y+ny[i]
            print(dy,dx)
    if dx<1 or dy<1 or dx>n or dy>n:
        continue
    x,y=dx,dy        

print(y,x)
