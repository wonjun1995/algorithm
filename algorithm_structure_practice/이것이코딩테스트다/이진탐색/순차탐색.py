import sys

def sequential_search(n,target,array):
    for i in range(n):
        if array[i]==target:
            return i+1

input=sys.stdin.readline().split()
n=int(input[0])
target=input[1]

array=sys.stdin.readline().split()

print(sequential_search(n,target,array))