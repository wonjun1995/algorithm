import sys

data=list(sys.stdin.readline().rstrip())

data.sort()

print(data)
sum=0
result=[]
for i in data:
    if i.isdigit():
        sum+=int(i)
    else:
        result.append(i)
result.append(str(sum))


print("".join(result))
