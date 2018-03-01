class Solution:
    def findErrorNums(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        s1 = s2 = 0
        for i in range(len(nums)):
            tmp = abs(nums[i])
            s2 ^= (i + 1) ^ tmp
            if nums[tmp-1] < 0:
                s1 = tmp
            else:
                nums[tmp-1] *= -1
        return [s1, s2^s1]