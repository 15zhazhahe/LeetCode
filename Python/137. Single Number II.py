class Solution:
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        ones, twos, threes = 0, 0 ,0 
        for num in nums:
            twos |= ones & num
            ones ^= num
            print(twos, ones)
            threes = ones & twos
            ones &= ~threes
            twos &= ~threes
            print(twos, ones)
        return ones