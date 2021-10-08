import sys

#떡의 개수 N과 요청한 떡의 길이 M
n,m = list(map(int,sys.stdin.readline().split()))
dduck=list(map(int,sys.stdin.readline().split()))
start=0
end=max(dduck)

while start<=end:
    mid=(start+end)//2
    dduck_length=0
    for x in dduck:
        if x> mid:
            dduck_length+=(x-mid)
    
    if m==dduck_length:
        print(mid)
        break
    elif m < dduck_length:
        start=mid+1
    elif m > dduck_length:
        end=mid-1