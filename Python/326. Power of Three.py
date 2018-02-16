class Solution:
    def isPowerOfThree(self, n):
        """
        :type n: int
        :rtype: bool
        """
        tmp = 1
        while tmp < n:
            tmp *= 3
        return tmp == n
