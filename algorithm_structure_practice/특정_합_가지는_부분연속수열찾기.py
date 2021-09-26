import sys

sub_sum=5
data=[1,2,3,2,5]

end=0
sum=0
count=0

#start부터 data길이까지 반복문 돌리기
for start in range(len(data)):
    #sum이 부분합보다 작을때까지, end가 data의 길이보다 작을 때까지 반복
    while sum < sub_sum and end < int(len(data)):
        #sum이 start부터 data[end]까지 더해짐
        sum+=data[end]
        end+=1
        #sum이 sub_sum보다 크거나 같아지면 while문 종료 
    #sum이 sub_sum이랑 같으면 count +1 증가
    if sum == sub_sum:
        count+=1

    #start위치가 바뀔 것이기 때문에 sum에서 data[start]빼주고 다음 start로 넘어감.
    sum-=data[start]

print(count)

