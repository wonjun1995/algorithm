from bisect import bisect_left,bisect_right

#값이 [left_value,right_value]인 데이터의 개수를 반환하는 함수
def count_by_range(a,left_value,right_value):
    right_index=bisect_right(a,right_value)
    print("right_index: ",right_index)
    left_index= bisect_left(a,left_value)
    print("left_index: ",left_index)
    return right_index - left_index

#리스트 선언
a=[1,2,3,3,3,3,4,4,8,9]

#값이 4인 데이터 개수 출력
print("result: ",count_by_range(a,4,4))

#값이 [-1,3] 범위에 있는 데이터 갯 출력
print("result: ",count_by_range(a,-1,3))