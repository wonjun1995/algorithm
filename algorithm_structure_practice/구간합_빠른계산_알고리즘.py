import sys

#데이터의 갯수
n=5
data=[10,20,30,40,50]

#접두사 합 배열 계산
sum_value=0
prefix_sum=[0]

#접두사 합(Prefix Sum): 배열의 맨 앞부터 특정 위치까지의 합을 미리 구해 놓은 것
#접두사 합 순차적으로 계산 후 prefix_sum 배열에 저장
for i in data:
    sum_value+=i
    prefix_sum.append(sum_value)

#구간 합 계산
left=3
right=4
print(prefix_sum[right]-prefix_sum[left-1])
