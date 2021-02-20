t = int(input())

while(t):

    n,m = list(map(int, input().split()))
    insts = input()
    query = []
    for _ in range(m):
        query.append(tuple(map(int, input().split())))

    count = [1]*m
    for inst in insts:
        if inst == '+':
            

    t -= 1