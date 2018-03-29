class Solution:
    def updateMatrix(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: List[List[int]]
        """
        if len(matrix) == 0:
            return []
        n, m = len(matrix), len(matrix[0])
        dp = [[float('inf') for i in range(m)] for j in range(n)]
        for i in range(n):
            for j in range(m):
                if matrix[i][j] == 0:
                    dp[i][j] = 0
                else:
                    dp[i][j] = min(dp[i][j], dp[max(i-1, 0)][j]+1)
                    dp[i][j] = min(dp[i][j], dp[i][max(j-1, 0)]+1)
        for i in range(n-1, -1, -1):
            for j in range(m-1, -1, -1):
                dp[i][j] = min(dp[i][j], dp[min(i+1, n-1)][j]+1)
                dp[i][j] = min(dp[i][j], dp[i][min(j+1, m-1)]+1)
        return dp