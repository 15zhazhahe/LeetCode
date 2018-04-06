class Solution(object):
    def countSubstrings(self, s):
        """
        :type s: str
        :rtype: int
        """
        n = len(s)
        dp = [[0]*n for i in range(n)]
        ans = 0
        for i in range(n):
            for j in range(i+1):
                if s[i] == s[j]:
                    if i-j < 2:
                        dp[j][i] = 1
                    else:
                        dp[j][i] = dp[j+1][i-1]
                if dp[j][i]:
                    ans += 1
        return ans