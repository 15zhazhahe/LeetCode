class Solution:
    def longestPalindromeSubseq(self, s):
        """
        :type s: str
        :rtype: int
        """
        dp = [[0 for i in range(len(s))] for j in range(len(s))]
        for j in range(len(s)):
            dp[j][j] = 1
            for i in range(j-1, -1, -1):
                if s[i] == s[j]:
                    dp[i][j] = dp[i+1][j-1] + 2
                else:
                    dp[i][j] = max(dp[i+1][j], dp[i][j-1])
        return dp[0][len(s)-1]
