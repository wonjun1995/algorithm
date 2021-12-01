#가장 큰 수

numbers=[6,10,2]

def solution(numbers):
    numbers = list(map(str, numbers))
    numbers.sort(key = lambda x: x*3, reverse=True)
    return str(int(''.join(numbers)))

print(solution(numbers))

# map함수를 이용하여 numbers배열을 str로 변환하게끔 매핑하여 배열로 리턴 
# list.sort()와 sorted()는 모두 비교하기 전에 각 리스트 요소에 대해 호출할 함수를 지정하는 key 매개 변수를 가지고 있음.
# x * 3 -> 문자열에 3을 곱해주면 해당문자열을 3개 나열하는 것과 같으니
# '333', '303030', '343434', '555', '999'를 key로 넣어주면.
# 정렬을 하면 303030 -> 333 -> 343434 -> 555 -> 999가 될 것인데
# reverse=True로 해서 거꾸로 정렬된 결과가 리턴됨.
# numbers=9,5,34,3,30 이 됨.
# return str(int(''.join(numbers)))을 통하여 문자열을 합쳐주면 해결
# join은 배열을 특정 문자로 변환해주는 함수