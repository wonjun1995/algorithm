import sys

input=sys.stdin.readline().rstrip()

result=1
for data in input:
    if int(data) == 0:
        continue
    result*=int(data)

print(result)

