import sys
import math

#M이상 N 이하의 소수를 모두 출력하는 프로그램을 작성하시오.

m,n = list(map(int,sys.stdin.readline().split()))
arr=[True for m in range(n+1)]

for i in range(2,int(math.sqrt(n))+1):
    if arr[i] == True:
        j=2
        while i*j<=n:
            arr[i*j]=False
            j+=1

#모든 소수 출력
for i in range(m,n+1):
    if arr[i]:
        print(i)