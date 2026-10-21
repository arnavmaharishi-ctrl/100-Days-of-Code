def next_greater(arr):
    n = len(arr)
    result = []
    for i in range(n):
        found = -1
        for j in range(i + 1, n):
            if arr[j] > arr[i]:
                found = arr[j]
                break
        result.append(str(found))
    print(", ".join(result))
