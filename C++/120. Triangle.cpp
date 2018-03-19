class Solution:
    def minimumTotal(self, triangle):
        """
        :type triangle: List[List[int]]
        :rtype: int
        """
        n = len(triangle)
        dp = [0]*n
        for i in range(n-1, -1, -1):
            for j in range(0, i+1):
                if i == n-1:
                    dp[j] = triangle[i][j]
                else:
                    dp[j] = triangle[i][j] + min(dp[j],dp[j+1])
        return dp[0]