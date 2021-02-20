T = int(input())
for _ in range(T):
    a, b = list(map(int, input().split()))
    diff = abs(a-b)
    result = diff//10 + (1 if diff%10 > 0 else 0)
    print (result)