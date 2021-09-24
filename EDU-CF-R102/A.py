t = int(input())

while(t):

    n,d = list(map(int, input().split()))
    a = list(map(int, input().split()))
    a.sort()

    if a[-1] <= d:
        print('YES')
    elif a[0]+a[1] > d:
        print('NO')
    else:
        print('YES')

    t -= 1