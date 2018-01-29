# Time: O(n)
class Solution:
    def distributeCandies(self, candies):
        """
        :type candies: List[int]
        :rtype: int
        """
        ans = set()
        for candie in candies:
            ans.add(candie)
        return min(len(ans), len(candies)//2)