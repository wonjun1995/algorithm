import sys

n,m = map(int,sys.stdin.readline().split())

data=list(map(int,sys.stdin.readline().split()))

count=0

#이중 반복문으로 푸는 경우 (되게 비효율적이지만 간단 명료)
# for i in range(n):
#     for j in range(i+1,n):
#         if data[i] == data[j]:
#             continue
#         else:
#             count+=1

#print(count)

#그리디 알고리즘으로 푸는 경우
array=[0]*11

for x in data:
    #각 무게에 해당하는 볼링공의 개수 카운트
    array[x] +=1

for i in range(1,m+1):
    #무게가 i인 볼링공의 개수(A가 선택할 수 있는 개수) 제외
    n-=array[i]
    count+=array[i]*n

print(count)