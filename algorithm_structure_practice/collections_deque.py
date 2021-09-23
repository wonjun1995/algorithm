from collections import deque

data=deque([2,3,4])
data.appendleft(1)
data.append(5)

print(data)
#list 자료형으로 변환해줘야 인덱싱, 슬라이싱 등의 기능 사용 가능
print("list: ",list(data))