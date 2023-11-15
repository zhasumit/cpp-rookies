class Solution:
    def sortColors(self, nums: List[int]) -> None:
        # dutch national flag algorithm 
        low, mid, high = 0, 0, len(nums)-1

        while mid <= high :
            if nums[mid] == 0 :
                nums[low], nums[mid] = nums[mid], nums[low]
                low += 1
            elif nums[mid] == 2:
                nums[mid], nums[high] = nums[high], nums[mid]
                high -= 1
                mid -= 1
            mid += 1

