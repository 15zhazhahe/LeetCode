class Solution:
    def checkSubarraySum(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """
        maple = {0:-1}
        res = 0
        for i in range(len(nums)):
            res += nums[i]
            if k != 0:
                res %= k
            index = maple.get(res)
            if index != None:
                if i - index > 1:
                    return True
            else:
                maple[res] = i
        return False