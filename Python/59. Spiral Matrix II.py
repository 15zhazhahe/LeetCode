class Solution:
    def generateMatrix(self, n):
        """
        :type n: int
        :rtype: List[List[int]]
        """
        ans = [[0 for i in range(n)] for j in range(n)]
        cnt = 1
        rs, re = 0, n - 1
        cs, ce = 0, n - 1
        while rs <= re and cs <= ce:
            for i in range(cs, ce+1):
                ans[rs][i] = cnt
                cnt += 1
            rs += 1
            for i in range(rs, re+1):
                ans[i][ce] = cnt
                cnt += 1
            ce -= 1
            for i in range(ce, cs-1, -1):
                ans[re][i] = cnt
                cnt += 1
            re -= 1
            for i in range(re, rs-1, -1):
                ans[i][cs] = cnt
                cnt += 1
            cs += 1
        return ans