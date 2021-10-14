import sys

data=list(map(int,sys.stdin.readline().rstrip()))


if len(data) %2 ==0:
    temp=len(data) //2
    left=sum(data[0:temp])
    right=sum(data[temp:])
    if left == right:
        print("LUCKY")
    elif left != right:
        print("READY")
else:
    print("READY")