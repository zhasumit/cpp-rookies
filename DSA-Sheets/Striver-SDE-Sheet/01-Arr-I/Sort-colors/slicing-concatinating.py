class Solution:
    def sortColors(self, nums: List[int]) -> None:
        # make a list of 0s 1s and 2s on count basis
        reds = nums.count(0) * [0] 
        whites = nums.count(1) * [1] 
        blues = nums.count(2) * [2]
        
        # concatinate the above lists 
        nums[:] = reds + whites + blues