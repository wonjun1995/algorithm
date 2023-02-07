def solution(my_string):
    answer = ''.join(dict.fromkeys(my_string))
    return answer


def solution(my_string):
    answer =''
    for i in my_string:
        if i not in answer:
            answer += i
    return answer

#dict.fromkeys
# 리스트의 중복을 제거할 때 사용 가능하다.