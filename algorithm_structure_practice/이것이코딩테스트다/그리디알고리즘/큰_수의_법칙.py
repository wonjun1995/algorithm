import sys

#다양한 수로 이루어진 배열이 있을 때 주어진 수들을 M번 더하여 가장 큰 수를 더하는 법칙
#단, 배열의 특정한 인덱스에 해당하는 수가 연속해서 K번을 초과하여 더해질 수 없음
#배열의 크기 N
#숫자가 더해지는 횟수 M
#연속한 숫자 제한 횟수 K

#입력으로 주어지는 K는 항상 M보다 작거나 같다.

import sys

n,m,k = map(int,sys.stdin.readline().split())
sum=0
data=list(map(int,sys.stdin.readline().split()))

data.sort()
print(data) #[2, 4, 4, 5, 6]
############################################################여기까진 동일함.
n1=n
m1=m
k1=k

while True:

    for i in range(k):
        if m== 0:
            break
        sum+=data[n-1]
        m-=1
    if m ==0:
        break
    sum+=data[n-2]
    m-=1
print("풀이방법1: ",sum)

#두번째 풀이법
#반복되는 수열에 대하여 파악해야 함.
# int(M/(K+1))*K + M%(K+1)

count=0
#반복되는 수열의 길이를 먼저 구하고 K를 곱해주면 가장 큰 수가 등장하는 횟수가 됨.
count=int(m1/(k1+1))*k1
#위의 상황에서 M이 나누어 떨어지지 않을 때를 고려
#m을 나머지k+1로 나눈 나머지 만큼 가장 큰 수가 추가로 더해짐
count+=m1%(k1+1)

#count => 가장 큰 수가 등장하는 횟수를 의미

#(m-count) => 두번째로 큰 수가 등장하는 횟수를 의미

result=0
result+=count*data[n-1]
result+=(m1-count)*data[n-2]

print("풀이방법2: ",result)

