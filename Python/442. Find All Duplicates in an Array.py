class Solution:
    def findDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        ans = list()
        for num in nums:
            v = abs(num)
            if nums[v-1] < 0:
                ans.append(v)
            else:
                nums[v-1] = -nums[v-1]
        return ans