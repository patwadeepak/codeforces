class suffix:
    
    def __init__(self):
        self.index = 0
        self.rank = [0, 0]

def suffix_array(arr):

    arr += '$'
    n = len(arr)

    suffixes = [suffix() for _ in range(n)]

    for i in range(n):
        suffixes[i].index = i
        suffixes[i].rank[0] = ord(arr[i%n])
        suffixes[i].rank[1] = ord(arr[(i+1)%n])

    suffixes = sorted(suffixes, key = lambda x: (x.rank[0], x.rank[1]))

    ind = [0] * n # to get index of suffix with any index value
    k = 4         # represents num of chars
    while(k < 2*n):

        # rank[0] calc
        prev_rank = suffixes[0].rank
        suffixes[0].rank = [0, 0]
        rank = 0

        ind[suffixes[0].index] = 0

        for i in range(1, n):
            if suffixes[i].rank != prev_rank:
                rank += 1
            prev_rank = suffixes[i].rank.copy()
            suffixes[i].rank[0] = rank
            ind[suffixes[i].index] = i

        # rank[1] calc
        for i in range(n):
            suffixes[i].rank[1] = suffixes[ind[(suffixes[i].index + k//2)%n]].rank[0]
        
        suffixes = sorted(suffixes, key = lambda x: (x.rank[0], x.rank[1]))
        k *= 2
    
    return [item.index for item in suffixes]

if __name__ == "__main__":
    
    # txt = 'ppppplppp'
    txt = input()

    sa = suffix_array(txt)

    print(" ".join(map(str,sa)))