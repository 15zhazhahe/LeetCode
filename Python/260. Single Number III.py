class Solution:
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        tmp, ans = 0, [0, 0]
        for num in nums:
            tmp ^= num
        tmp = (tmp & (tmp - 1)) ^ tmp
        for num in nums:
            if num & tmp:
                ans[0] ^= num
            else:
                ans[1] ^= num
        return ans