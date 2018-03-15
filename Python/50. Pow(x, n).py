class Solution:
    def myPow(self, x, n):
        """
        :type x: float
        :type n: int
        :rtype: float
        """
        res = 1
        if n < 0:
            n = -n
            x = 1.0/x
        while n > 0:
            if n % 2 != 0:
                res = res * x
            x = x * x
            n >>= 1
        return res