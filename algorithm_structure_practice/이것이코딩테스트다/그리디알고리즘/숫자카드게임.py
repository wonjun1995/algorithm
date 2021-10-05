import sys

#숫자가 N X M  형태로 놓여 잇음.
#먼저 뽑고자 하는 카드가 포함되어 있는 행을 선택
#선택된 행에 포함된 카드들 중 가장 숫자가 낮은 카드를 뽑아야 함.

n,m=map(int,sys.stdin.readline().split())
temp_result=[]

for i in range(n):
    temp=list(map(int,sys.stdin.readline().split()))
    temp_result.append(min(temp))

result=max(temp_result)

print(result)
