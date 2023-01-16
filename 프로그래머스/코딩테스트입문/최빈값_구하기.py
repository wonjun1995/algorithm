def solution(array):
    count=[]
    max_cnt=0
    n=0
    setList=list(set(array))
    
    for i in setList:
        if max_cnt < array.count(i):
            max_cnt = array.count(i)
        count.append([i,array.count(i)])
        
    count.sort(key=lambda x:-x[1])
    print(count)
    print(len(count))
    
    if len(count) < 2:
        return count[0][0]
    elif len(count) >= 1 and count[0][1] == count[1][1]:
        return -1
    elif count[0][1] != count[1][1]:
        return count[0][0]
    
