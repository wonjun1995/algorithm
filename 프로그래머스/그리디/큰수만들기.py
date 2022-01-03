import sys
# 어떤 숫자에서 k개의 수를 제거햇을 때 얻을 수 있는 가장 큰 수 구하기

#문자열 형식으로 숫자 number와 제거할 수의 개수 K 는 매개변수

def solution(number, k):
    answer = ''
    stk = []
    for i in number:
        while stk and stk[-1] < i and k>0:
            k-=1
            stk.pop()
        stk.append(i)
    return "".join(stk[:len(stk)-k])