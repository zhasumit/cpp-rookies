class Solution:
    def sortColors(self, nums: List[int]) -> None:
        reds = nums.count(0)
        whites = nums.count(1)
        blues = nums.count(2)

        for x in range(len(nums)):
            if reds > 0:
                nums[x] = 0
                reds -= 1

            elif whites > 0:
                nums[x] = 1
                whites -= 1

            elif blues > 0:
                nums[x] = 2
                blues -= 1