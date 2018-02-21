class Solution:
    def findRelativeRanks(self, nums):
        """
        :type nums: List[int]
        :rtype: List[str]
        """
        tmp = sorted(nums)[::-1]
        rank = ["Gold Medal", "Silver Medal", "Bronze Medal"] + list(map(str, range(4, len(nums)+1)))
        ans = list(map(dict(zip(tmp, rank)).get,nums))
        return ans
        