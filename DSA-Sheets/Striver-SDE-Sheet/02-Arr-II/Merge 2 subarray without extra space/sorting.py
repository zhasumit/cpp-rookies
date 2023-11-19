class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        # if the first list is empty
        if m == 0 and n > 0:
            for i in range(n):
                nums1[i] = nums2[i]
        
        # put all the elements in nums1
        if m>0 and n>0:
            for i in range(m+n):
                # only if nums1's count is done
                # and nums2 is left to push
                if i >= m:
                    nums1[i] = nums2[i-m]

        nums1.sort() 