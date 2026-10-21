def first_negative_windows(arr, k):
    res = []
    for i in range(len(arr) - k + 1):
        found = 0
        for x in arr[i : i + k]:
            if x < 0:
                found = x
                break
        res.append(str(found))
    print(" ".join(res))
