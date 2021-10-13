import sys

n=map(int,sys.stdin.readline().rstrip())

input=list(map(int,sys.stdin.readline().split()))
input.sort()

target=1
for x in input:
    #만들 수 없는 금액을 찾았을 때 반복 종료
    if target < x:
        print(target)
        break
    target+=x
    print(target)

#만들 수 없는 금액 출력
print("최종: ",target)

    