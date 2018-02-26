class Solution:
    def findLHS(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count = collections.Counter(nums)
        ans = 0
        for num in nums:
            if count[num] > 0 and count[num+1] > 0:
                ans = max(ans, count[num]+count[num+1])
        return ans