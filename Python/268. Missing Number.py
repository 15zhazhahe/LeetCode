class Solution:
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        ans = len(nums)*(1+len(nums))//2
        for num in nums:
            ans -= num
        return ans