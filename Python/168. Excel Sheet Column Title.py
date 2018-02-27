class Solution:
    def convertToTitle(self, n):
        """
        :type n: int
        :rtype: str
        """
        ans = list()
        while n != 0:
            n -= 1
            ans.append(chr(ord('A') + n % 26))
            n //= 26
        return ''.join(ans[::-1])