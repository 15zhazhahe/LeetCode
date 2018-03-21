class Solution:
    def canJump(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        i, step = 0, 0
        while i < len(nums):
            if i > step:
                return False
            step = max(i+nums[i], step)
            i += 1
        return i == len(nums)