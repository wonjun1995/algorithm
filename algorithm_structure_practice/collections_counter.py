from collections import Counter

counter=Counter(['red','blue','red','blue','green','blue'])

print(counter['blue'])
print(counter['red'])
print(counter['green'])
print(dict(counter))    #사전 자료형으로 변환