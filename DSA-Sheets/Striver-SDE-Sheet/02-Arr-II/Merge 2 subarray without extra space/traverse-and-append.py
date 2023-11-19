class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        # REMOVE all the elements after m 
        for i in range(m, m+n):
            nums1.pop(m)
        
        # take the slice of nums2 and add to nums1
        for i in range(n):
            nums1.append(nums2[i])

        nums1.sort()