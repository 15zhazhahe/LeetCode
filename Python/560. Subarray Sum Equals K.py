class Solution:
    def subarraySum(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        maple = dict()
        res, ans = 0, 0
        maple[0] = 1;
        for num in nums:
            res += num
            ans += maple.get(res-k, 0)
            maple[res] = maple.get(res, 0) + 1
        return ans