class NumArray:

    def __init__(self, nums):
        """
        :type nums: List[int]
        """
        self.s = [0]
        for num in nums:
            self.s.append(self.s[-1] + num)

    def sumRange(self, i, j):
        """
        :type i: int
        :type j: int
        :rtype: int
        """
        return self.s[j+1] - self.s[i]


# Your NumArray object will be instantiated and called as such:
# obj = NumArray(nums)
# param_1 = obj.sumRange(i,j)