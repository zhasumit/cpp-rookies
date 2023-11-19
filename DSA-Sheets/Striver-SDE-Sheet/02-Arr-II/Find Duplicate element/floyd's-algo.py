class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        # find the first posn to intersect at
        slow, fast = 0, 0 
        while True:
            slow = nums[slow]
            fast = nums[nums[fast]]
            if slow == fast:
                break

        # take the second slow ptr and take one shift
        fast = 0
        while True:
            slow = nums[slow]
            fast = nums[fast]
            if slow == fast:
                return slow