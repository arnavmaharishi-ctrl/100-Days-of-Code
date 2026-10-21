def max_subarray_sum(arr, k):
    cur_sum = sum(arr[:k])
    max_sum = cur_sum
    
    for i in range(k, len(arr)):
        cur_sum += arr[i] - arr[i - k]
        if cur_sum > max_sum:
            max_sum = cur_sum
            
    return max_sum
