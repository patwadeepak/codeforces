import math

def LCM(s, t):
    n = len(s)
    m = len(t)
    s_count = {'a': 0, 'b': 0}
    t_count = {'a': 0, 'b': 0}

    for char in s:
        s_count[char] += 1
    
    for char in t:
        t_count[char] += 1
    
    if s_count['a']/s_count['b'] == t_count['a']/t_count['b']:
        if n > m:
            gcd = math.gcd(t_count['a'], t_count['b'])
            pattern_length = t_count['a']/gcd + t_count['b']/gcd
        else:
            gcd = math.gcd(s_count['a'], s_count['b'])
            pattern_length = s_count['a']/gcd + s_count['b']/gcd

        pattern_length = int(pattern_length)
        a = n//pattern_length
        b = m//pattern_length

        if s[:pattern_length]*a == s and t[:pattern_length]*b == t:
            lcm = int(a*b/math.gcd(a,b))
            return s[:pattern_length]*lcm
        else:
            return -1
    else:
        return -1

if __name__ == "__main__":
    t = int(input())

    while t:
        p = input()
        q = input()
        print(LCM(p, q))
        t -= 1