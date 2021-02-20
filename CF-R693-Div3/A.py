import math
t = int(input())

while(t):
    w, h, n = list(map(int, input().split(' ')))
    
    w2=0
    h2=0
    n_hat=None
    w_divisible = True
    h_divisible = True
    while(w_divisible or h_divisible):
        if w%2 == 0:
            w2 += 1
            w /= 2
        else:
            w_divisible = False

        if h%2 == 0:
            h2 += 1
            h /= 2
        else:
            h_divisible = False

        n_hat = 2**w2 * 2**h2
        if n_hat >= n:
            break

    if n_hat >= n:
        print('YES')
    else:
        print('NO')
    t -= 1