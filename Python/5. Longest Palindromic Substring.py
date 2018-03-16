class Solution:
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        dp = [[0 for i in range(len(s))] for j in range(len(s))]
        ans, start = 0, 0
        for i in range(len(s)-1, -1, -1):
            for j in range(i, len(s)):
                if s[i] == s[j]:
                    if j - i < 3:
                        dp[i][j] = 1
                    elif dp[i+1][j-1] == 1:
                        dp[i][j] = 1
                if dp[i][j] == 1 and j - i + 1 > ans:
                    ans = j - i + 1;
                    start = i
        return s[start: start+ans]