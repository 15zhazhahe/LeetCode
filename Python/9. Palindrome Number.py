class Solution:
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x < 0:
            return False
        sum1, sum2 = 0, x
        while x:
            sum1 = sum1 * 10 + x%10
            x //= 10
        return sum1 == sum2  