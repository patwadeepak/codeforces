class suffix:
    
    def __init__(self):
        self.index = 0
        self.rank = [0, 0]

# Counting Sort
def counting_sort(arr, exp):
  
    n = len(arr)
  
    output = [0] * n

    count = [0] * 27
  
    # Store count of occurrences in count[]
    for i in range(n):
        count[arr[i].rank[exp]] += 1
  
    # Change count[i] to be cumulative so that count[i] now 
    # contains actual position of this digit in output array
    for i in range(1, n):
        count[i] += count[i - 1]

    # important to loop backwards. loop over arr[::-1] not over arr
    for num in arr[::-1]:
        output[count[num.rank[exp]] - 1] = num
        count[num.rank[exp]] -= 1
  
    return output

# function that builds suffix array
def suffix_array(arr):

    arr += '$'
    n = len(arr)

    suffixes = [suffix() for _ in range(n)]

    # k = 2
    for i in range(n):
        suffixes[i].index = i
        suffixes[i].rank[0] = ord(arr[i%n]) - ord('a')
        suffixes[i].rank[1] = ord(arr[(i+1)%n]) - ord('a')

    suffixes = sorted(suffixes, key = lambda x: (x.rank[0], x.rank[1]))

    ind = [0] * n  # to get index of suffix with any index value
    k = 4          # represents num of chars

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
            suffixes[i].rank[1] = rank
            ind[suffixes[i].index] = i

        # rank[1] calc
        for i in range(n):
            index = (suffixes[i].index-k//2)%n
            suffixes[i].rank[0] = suffixes[ind[index]].rank[1]
            suffixes[i].index = index
        
        # sort by rank
        suffixes = counting_sort(suffixes, 0)
        k *= 2
    
    return [item.index for item in suffixes]

if __name__ == "__main__":
    
    txt = 'abcdabcd'
    # txt = input()

    sa = suffix_array(txt)

    print(" ".join(map(str,sa)))