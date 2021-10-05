import sys

# 정수 N이 입력되면
# 00시00분00초 ~ N시 59분 59초까지의 모든 시각 중에서 3이 하나라도 포함되는 모든 경우의 수를 구하는 프로그램

n=int(input())
count=0
for h in range(n+1):
    for m in range(60):
        for s in range(60):
            if '3' in str(h)+str(m)+str(s):
                count+=1

print(count)