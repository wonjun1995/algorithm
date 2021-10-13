import sys

#N명의 모험가 입력
n=int(input())
result=0
data=list(map(int,sys.stdin.readline().split()))
data.sort()
count=0
for i in data:
    count+=1
    if count >=i:
        result+=1
        count=0

print(result)
