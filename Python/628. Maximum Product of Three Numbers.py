class Solution1:
    def maximumProduct(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        return max(nums[0] * nums[1] * nums[-1], nums[-1] * nums[-2] * nums[-3])

class Solution2:
    def maximumProduct(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        a1, a2, a3 = -10000, -10000, -10000
        b1, b2 = 10000, 10000
        for num in nums:
            if num > a1:
                a3 = a2
                a2 = a1
                a1 = num
            elif num > a2:
                a3 = a2
                a2 = num
            elif num > a3:
                a3 = num
            if num < b1:
                b2 = b1
                b1 = num
            elif num < b2:
                b2 = num
        return max(a1 * a2 * a3, a1 * b1 * b2)