#완전탐색 bfs
import sys

def solution(answer):
    pattern1=[1,2,3,4,5]
    pattern2=[2,1,2,3,2,4,2,5]
    pattern3=[3,3,1,1,2,2,4,4,5,5]
    score = [0,0,0]
    result = []
    
    for idx, answer in enumerate(answer):
    	if answer == pattern1[idx%len(pattern1)]:
        	score[0] += 1
        if answer == pattern2[idx%len(pattern2)]:
        	score[1] += 1
        if answer == pattern3[idx%len(pattern3)]:
        	score[2] += 1   
    for idx, s in enumerate(score):
    	if s == max(score):
        	result.append(idx+1)
    
    return result


# enumerate 함수
# 리스트가 있는 경우 순서와 리스트의 값을 전달하는 함수
# 순서가 있는 자료형(list,set,tuple,dictionary,string)을 입력받아 인덱스 값을 포함하는 enumerate 객체 리턴
# 보동 enumerate 함수는 for문과 함께 자주 사용