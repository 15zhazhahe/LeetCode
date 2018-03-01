class Solution:
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        if numRows == 0:
            return []
        ans = list()
        ans.append([1])
        for i in range(1, numRows):
            tmp = [1]
            for j in range(1, i):
                tmp.append(ans[i-1][j-1] + ans[i-1][j])
            tmp.append(1)
            ans.append(tmp)
        return ans