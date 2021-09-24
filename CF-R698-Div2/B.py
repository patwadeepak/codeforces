t = int(input())

while(t):

    q, d = list(map(int, input().split()))
    a    = list(map(int, input().split()))

    i=0
    while(q):
        
        # check every digit for d
        if str(d) in str(a[i]):
            print('YES')
        else:
            if a[i]%d == 0:
                print('YES')
            
        q -= 1

    t -= 1