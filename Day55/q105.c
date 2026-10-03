def majority_element(nums):
    n = len(nums)
    for num in set(nums):
        if nums.count(num) > n // 2:
            return num
    return -1

