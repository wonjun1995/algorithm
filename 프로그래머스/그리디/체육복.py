import sys

n=5
lost=[2,4]
reserve=[3,5]

set_reserve=[r for r in reserve if r not in lost]
set_lost=[l for l in lost if l not in reserve]
for i in set_reserve:
    if i-1 in set_lost:
        set_lost.remove(i-1)
    elif i+1 in set_reserve:
        set_lost.remove(i+1)

print(set_reserve)
print(set_lost)
print(n-len(set_lost))