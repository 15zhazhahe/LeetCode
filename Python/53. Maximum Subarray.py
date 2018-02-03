class Solution:
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        cnt = ans = nums[0]
        for i in range(1, len(nums)):
            if cnt < 0:
                cnt = 0
            cnt += nums[i]
            ans = max(ans, cnt)
        return ans