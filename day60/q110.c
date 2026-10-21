def max_in_windows(arr, k):
    res = []
    for i in range(len(arr) - k + 1):
        res.append(str(max(arr[i : i + k])))
    print(" ".join(res))
