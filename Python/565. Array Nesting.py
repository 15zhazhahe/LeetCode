class Solution:
    def arrayNesting(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        vis = [0]*len(nums)
        ans = 0
        for i in range(len(nums)):
            num = nums[i]
            tmp = 0
            while vis[num] != 1:
                vis[num] = 1
                num = nums[num]
                tmp += 1
            ans = max(ans, tmp)
        return ans