class Solution:
    def numberOfBoomerangs(self, points):
        """
        :type points: List[List[int]]
        :rtype: int
        """
        ans = 0
        for point1 in points:
            maple = dict()
            for point2 in points:
                if point1 == point2:
                    continue
                dx = (point1[0]-point2[0])*(point1[0]-point2[0])
                dy = (point1[1]-point2[1])*(point1[1]-point2[1])
                maple[dx+dy] = maple.get(dx+dy, 0) +1
            for k in maple:
                if maple[k] > 1:
                    ans += maple[k]*(maple[k]-1)
        return ans