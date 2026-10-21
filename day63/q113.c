def kth_smallest(arr, k):
    arr.sort()
    return arr[k - 1]
