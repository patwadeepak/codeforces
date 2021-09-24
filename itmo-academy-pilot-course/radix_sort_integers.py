# gives face value of nth digit from right for a number
def fv_digit(num, n):
    return (num//(10**(n-1)))%10

# Counting Sort
def countingSort(arr, exp=1):
  
    n = len(arr)
  
    output = [0] * n
  
    count = [0] * 10
  
    # Store count of occurrences in count[]
    for i in range(0, n): 
        count[fv_digit(arr[i], exp)] += 1
  
    # Change count[i] to be cumulative so that count[i] now 
    # contains actual position of this digit in output array
    for i in range(1, 10):
        count[i] += count[i - 1]

    # important to loop backwards. loop over arr[::-1] not over arr
    for num in arr[::-1]:
        digit = fv_digit(num, exp)
        output[count[digit] - 1] = num
        count[digit] -= 1
  
    return output

# Radix Sort
def radix_sort(arr):
    k = len(str(max(arr)))

    for exp in range(1, k+1):

        arr = countingSort(arr, exp)
    
    return arr

if __name__ == "__main__":

    arr = [170, 45, 75, 90, 802, 24, 2, 66]

    print(radix_sort(arr))