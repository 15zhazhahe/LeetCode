# Time: O(len)
class Solution:
    def maxCount(self, m, n, ops):
        """
        :type m: int
        :type n: int
        :type ops: List[List[int]]
        :rtype: int
        """
        for i in range(len(ops)):
            m = min(m, ops[i][0])
            n = min(n, ops[i][1])
        return n*m
