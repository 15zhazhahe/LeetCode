# Time: O(sqrt(n))
class Solution:
    def constructRectangle(self, area):
        """
        :type area: int
        :rtype: List[int]
        """
        w = int(math.sqrt(area))
        while w>= 1:
            if area%w==0:
                return [area//w, w];
            w -= 1