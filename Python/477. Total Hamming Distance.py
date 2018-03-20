class Solution:
    def totalHammingDistance(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        ans, n = 0, len(nums)
        for i in range(32):
            tmp = 0
            for num in nums:
                tmp += ((num>>i)&1)
            ans += tmp * (n-tmp)
        return ans