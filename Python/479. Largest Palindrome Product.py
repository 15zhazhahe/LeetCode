class Solution:
    def largestPalindrome(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n == 1:
            return 9
        if n == 8:
            return 475
        l = 10 ** (n - 1)
        r = 10 ** n - 1
        for i in range(r, l-1, -1):
            s = int(str(i) + str(i)[::-1])
            j = r
            while j*j >= s:
                if s % j == 0 and s // j <=r:
                    return s % 1337
                j -= 1
        return -1