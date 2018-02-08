class Solution:
    def arrangeCoins(self, n):
        """
        :type n: int
        :rtype: int
        """
        return int(math.sqrt(2.0*n+1.0/4) - 0.5);