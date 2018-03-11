class Solution:
    def findUnsortedSubarray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        ans, l, r = 0, 0, len(nums) - 1
        while l < len(nums)-1 and nums[l] <= nums[l+1]:
            l += 1
        while r > 0 and nums[r] >= nums[r-1]:
            r -= 1
        if l < r:
            mi = min(nums[l:r+1])
            ma = max(nums[l:r+1])
            while l >= 0 and nums[l] > mi:
                l -= 1
            while r < len(nums) and nums[r] < ma:
                r += 1
            ans = r - l - 1
        return ans