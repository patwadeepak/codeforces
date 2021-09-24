t = int(input())

while(t):

    s = list(map(int, input().split()))

    o = s.copy()

    s.sort()

    if ( s[-1] in o[2:] and s[-2] in o[:2] ) or ( s[-1] in o[:2] and s[-2] in o[2:] ):
        print("YES")
    else:
        print("NO")

    t-=1