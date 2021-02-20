T = int(input())
for _ in range(T):
    
    a, b, x, y, n = list(map(int, input().split()))
    
    while(n>0):
        if a>b:
            a,b = b,a
            x,y = y,x
        if a-x >= n:
            a -= n
            n -= n
        else:
            a = x
            n -= x
        
    print(a*b)
    
