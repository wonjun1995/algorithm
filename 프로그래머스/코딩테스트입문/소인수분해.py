def solution(n):
    answer = []
    i = 2
    while i <= n:
        if n % i == 0:
            answer.append(i)
            n = n//i
        else: 
            i = i +1
    return list(dict.fromkeys(answer))

# dict.fromkeys() dictionary는 Key깂을 넣는 순서를 기억한다. 
# 따라서 dict를 이용해서 가장 간단한 방법으로 리스트의 중복을 제거하면서 기존 리스트의 순서를 유지할 수 있다.