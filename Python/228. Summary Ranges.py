class Solution:
    def summaryRanges(self, nums):
        """
        :type nums: List[int]
        :rtype: List[str]
        """
        ans = list()
        l, r = 0, 0
        while l < len(nums):
            r = l
            while r+1 < len(nums) and nums[r+1] == nums[r] + 1:
                r += 1
            if l < r:
                ans.append(str(nums[l]) + "->" + str(nums[r]))
            else:
                ans.append(str(nums[l]))
            l = r+1
        return ans