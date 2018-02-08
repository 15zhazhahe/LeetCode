class Solution:
    def dominantIndex(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        ma, mai = -1, -1
        mma = -1
        for i in range(len(nums)):
            if nums[i] > ma:
                ma = nums[i]
                mai = i
        for i in range(len(nums)):
            if nums[i] > mma and nums[i] != ma:
                mma = nums[i]
        if ma >= 2*mma:
            return mai
        return -1