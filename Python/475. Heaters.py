class Solution:
    def findRadius(self, houses, heaters):
        """
        :type houses: List[int]
        :type heaters: List[int]
        :rtype: int
        """
        heaters = sorted(heaters)+[float('inf')]
        ans = i = 0
        for house in sorted(houses):
            while abs(heaters[i+1] - house) <= abs(heaters[i] - house):
                i += 1
            ans = max(ans, abs(heaters[i]-house))
        return ans