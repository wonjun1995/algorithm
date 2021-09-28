import sys

#화폐의 종류만큼 반복 수행을 해야 함. 

input=int(input())

coin=[500,100,50,10]
count=0

for i in coin:
    count+=(input//i)
    input %= i

print(count)