class Solution1:
    def hasAlternatingBits(self, n):
        """
        :type n: int
        :rtype: bool
        """
        ans = n ^ (n >> 1)
        return (ans & (ans+1)) == 0

class Solution2:
    def hasAlternatingBits(self, n):
        """
        :type n: int
        :rtype: bool
        """
        ans = bin(n)
        return '00' not in ans and '11' not in ans