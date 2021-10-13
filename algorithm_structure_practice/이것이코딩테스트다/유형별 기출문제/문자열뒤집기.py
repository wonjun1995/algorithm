import sys

input=list(map(int,sys.stdin.readline().rstrip()))

print(input)

count0=0
count1=0

for i in range(1,len(input)):
    if input[i] != input[i-1] and input[i] ==1:
        count0+=1
    elif input[i] != input[i-1] and input[i] ==0:
        count1+=1

print(min(count1,count0))