def kadane(arr):
    max_sum = arr[0]
    cur_sum = arr[0]
    
    for x in arr[1:]:
        cur_sum = max(x, cur_sum + x)
        max_sum = max(max_sum, cur_sum)
        
    return max_sum
