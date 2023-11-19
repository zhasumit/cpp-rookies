def numberOfInversions(a : List[int], n : int) -> int:
    # Count the number of pairs:
    cnt = 0
    for i in range(n):
        for j in range(i+1, n):
            if a[i] > a[j]:
                cnt += 1
    return cnt
