class Solution:
    def findNthDigit(self, n):
        """
        :type n: int
        :rtype: int
        """
        tt, d, b = 1, 9, 1
        while n - d * b > 0:
            n -= d * b
            d *= 10
            b += 1
            tt *= 10
        
        num = tt + n // b
        i = n % b
        if i == 0:
            return (num-1) % 10
        while i < b:
            i += 1
            num //= 10
        return num % 10
        