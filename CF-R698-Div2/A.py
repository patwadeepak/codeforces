t = int(input())

while(t):

    n = int(input())
    a = list(map(int, input().split()))
    count = [0]*101
    for num in a:
        count[num] += 1

    print(max(count))
    t -= 1