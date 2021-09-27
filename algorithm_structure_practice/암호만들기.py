#L개의 알파벳 소문자들로 구성
#최소 한 개의 모음과 최소 두 개의 자음으로 구성
#알파벳이 암호에서 증가하는 순서로 배열 (abc o , bac X)

import sys
import itertools

vowels=['a','e','i','o','u']

#l : 암호 구성 갯수 / c : 알파벳 구성 수
l,c=list(map(int,sys.stdin.readline().split()))
#alpha=[]
#for i in range(c):
#    alpha.append(sys.stdin.readline().rstrip())
alpha=sys.stdin.readline().split()
alpha.sort()

for pwd in itertools.combinations(alpha,l):
    #최소 한 개의 모음과 최소 두 개의 자음으로 구성
    count=0
    for i in pwd:
        if i in vowels:
            count+=1
    if count >=1 and count <= l-2:
        print(''.join(pwd))
