"""
ans = tag - min(nums)
(n-1)*ans = sum(tag-num)
"""
class Solution:
    def minMoves(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        mi = nums[0]
        for num in nums:
            mi = min(mi, num)
        return sum(nums) - len(nums)*mi