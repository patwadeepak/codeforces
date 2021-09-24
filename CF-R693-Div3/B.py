t = int(input())

while(t):
    n = int(input())
    a = list(map(int, input().split()))
    if sum(a)%2 != 0:
        print('NO')
    else:
        if n%2 == 0:
            print('YES')
        else:
            twos = a.count(2)
            ones = a.count(1)
            if twos%2 != 0 and ones >= 2:
                print('YES')
            else:
                print('NO')
    t-= 1