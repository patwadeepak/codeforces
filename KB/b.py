import math
t = int(input())

while(t):

    n = int(input())

    a = list(map(int, input().split()))

    even = []
    odd = []
    for item in a:
        if item%2 == 0: 
            even.append(item)
        else:
            odd.append(item)

    even.sort(reverse=True)
    odd.sort(reverse=True)

    even.extend(odd)

    good = 0

    for i,ai in enumerate(even[:-1]):
        result = [math.gcd(ai, 2*aj)>1 for aj in even[i+1:]]
        good += sum(result)

    print(good)

    t-=1