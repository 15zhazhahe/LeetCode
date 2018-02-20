class Solution:
    def findMaxAverage(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: float
        """
        ans = s = sum(nums[:k])
        for i in range(k, len(nums)):
            s = s - nums[i-k] + nums[i]
            ans = max(ans, s)
        return ans / k