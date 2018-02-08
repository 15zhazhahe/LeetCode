class Solution:
    def findLengthOfLCIS(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        cnt, ans = 0, 0
        for i in range(len(nums)):
            if i == 0 or nums[i] > nums[i-1]:
                cnt += 1
            else:
                cnt = 1
            ans = max(ans, cnt)
        return ans