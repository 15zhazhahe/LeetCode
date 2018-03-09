class Solution:
    def findShortestSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        maple, cnt = dict(), dict()
        ans, ma = 0, 0
        for i in range(len(nums)):
            if maple.get(nums[i]) is None:
                maple[nums[i]] = i
            cnt[nums[i]] = cnt.get(nums[i], 0) + 1
            if cnt[nums[i]] == ma:
                ans = min(ans, i - maple[nums[i]] + 1)
            if cnt[nums[i]] > ma:
                ma = cnt[nums[i]]
                ans = i - maple[nums[i]] + 1
        return ans
