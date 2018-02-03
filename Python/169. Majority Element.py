class Solution:
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        ans, cnt = 0, 0
        for num in nums:
            if num == ans:
                cnt += 1
            else:
                cnt -= 1
            if cnt < 0:
                cnt = 0
                ans = num
        return ans