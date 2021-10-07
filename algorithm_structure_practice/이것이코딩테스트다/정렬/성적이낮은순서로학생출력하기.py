import sys

# N 명의 학생 정보가 있음
# 학생정보 : 이름 성적

def setting(data):
    return data[1]

n=int(sys.stdin.readline().rstrip())
array=[]

for i in range(n):
    input=sys.stdin.readline().split()
    array.append((input[0],int(input[1])))

result=sorted(array,key=setting)

for i in result:
    print(i[0],end=' ')