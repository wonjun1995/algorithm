def solution(numer1, denom1, numer2, denom2):
    numer = numer1 * denom2 + numer2 * denom1
    denom = denom1 * denom2
    
    maxNum = max(numer, denom)
    gcd = 1
    
    for num in range(maxNum,0,-1):
        if numer % num == 0 and denom % num ==0 :
            gcd = num
            break
    
        
    answer = [numer/gcd, denom/gcd]
    return answer


        
# 최대 공약수를 이용하여 답을 구하는 문제
# 최대공약수(最大公約數)란, 
# 0이 아닌 두 개 이상의 정수의 공통되는 약수 중에서 가장 큰 수이다. 
# 따라서 두 정수 a와 b의 최대공약수는 a의 약수인 동시에 b의 약수인 수, 
# 즉 두 정수 a, b의 공약수 중에서 가장 큰 수를 의미한다.