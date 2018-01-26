# Time:  O(log(x^y))
# Space: O(1)
class Solution:
    def hammingDistance(self, x, y):
        """
        :type x: int
        :type y: int
        :rtype: int
        """
        z = x^y
        ans = 0
        while z>0:
            ans += z%2
            z /= 2
        return ans