class Solution:
    def isSubsequence(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        cnt, i = 0, 0
        while cnt < len(s) and i < len(t):
            if s[cnt] == t[i]:
                cnt += 1
            i += 1
        return cnt == len(s)