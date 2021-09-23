import sys

stack=[]

N=int(sys.stdin.readline())
for i in range(N):
    str=sys.stdin.readline().split()

    if str[0]=="push":
        stack.append(str[1])
    elif str[0] =="pop":
        if len(stack)==0:
            print(-1)
        else:
            print(stack.pop())
    elif str[0] =="size":
        print(len(stack))
    elif str[0] =="empty":
        if len(stack)==0:
            print(1)
        else:
            print(0)
    elif str[0] =="top":
        if len(stack)==0:
            print(-1)
        else:
            print(stack[-1])