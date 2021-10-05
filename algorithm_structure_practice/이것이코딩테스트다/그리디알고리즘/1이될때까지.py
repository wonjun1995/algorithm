import sys

#어떠한 수N이 1이 될때까지 두가지 과정 중 하나를 반복적으로 선택하여 수행
# 1. N에서 1을 뺀다.
# 2. N을 K로 나눈다.

# n,k 입력받기
# n이 k로 나눠는지 확인
# 안나눠지면 1을 빼고 다시 확인

n,k = map(int,sys.stdin.readline().split())
cnt=0
while True:
    if n==1:
        break;
    if n % k == 0:
        n=n//k
        cnt+=1
    elif n % k != 0:
        n-=1
        cnt+=1

print(cnt)