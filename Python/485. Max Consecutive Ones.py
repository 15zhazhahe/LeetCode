# Time: O(n)
class Solution:
    def findMaxConsecutiveOnes(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        ans, cnt = 0, 0
        for num in nums:
            if num == 1:
                cnt += 1
            else:
                cnt = 0
            ans = max(cnt, ans)
        return ans