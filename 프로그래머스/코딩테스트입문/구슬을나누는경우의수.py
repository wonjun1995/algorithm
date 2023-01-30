def factorial(n):
    if n > 1:
        return n * factorial(n-1)
    else:
        return 1

def solution(balls, share):
    answer = 0
    answer = factorial(balls) / (factorial(balls - share) * factorial(share))
    return answer