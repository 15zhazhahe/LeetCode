class Solution:
    def spiralOrder(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: List[int]
        """
        if matrix == []:
            return []
        ans = list()
        n, m = len(matrix), len(matrix[0])
        re, rs, ce, cs = n-1, 0, m-1, 0
        while True:
            print(cs, ce, rs, re)
            for i in range(cs, ce+1):
                ans.append(matrix[rs][i])
            rs += 1
            if rs >re:
                break
            for i in range(rs, re+1):
                ans.append(matrix[i][ce])
            ce -= 1
            if ce < cs:
                break
            for i in range(ce, cs-1, -1):
                ans.append(matrix[re][i])
            re -= 1
            if re < rs:
                break
            for i in range(re, rs-1, -1):
                ans.append(matrix[i][cs])
            cs += 1
            if cs > ce:
                break
        return ans