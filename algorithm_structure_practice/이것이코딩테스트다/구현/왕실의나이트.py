import sys

# 체스판 8*8 사이즈
# 나이트는 L자 형태로 이동가능
# 수평으로 2칸 이동한 뒤 수직으로 1칸 이동
# 수직으로 2칸 이동한 뒤 수평으로 1칸 이동

#  RU RD LU LD UR UL DU DL
# x:2  2 -2 -2 1 -1  1 -1 
# y:1 -1  1 -1 2  2 -2 -2

# 열이 문자로 표현되고 있는데 숫자로 변환시킬 방법 모색
# 아스키 코드
input=input()
row=int(input[1])
#ord라는 아스키코드 변환 내장함수를 이용
col=int(ord(input[0]))-int(ord('a'))+1
result=0

#나이트가 갈 수 있는 방향 8가지
directions=[(2,1),(2,-1),(-2,1),(-2,-1),(1,2),(-1,2),(1,-2),(-1,-2)]

for direction in directions:
    next_col=col+direction[1]
    next_row=row+direction[0]
    #해당 범위내에 좌표가 있다면 카운트
    if next_col>=1 and next_row>=1 and next_row<=8 and next_col<=8:
        result+=1

print(result)