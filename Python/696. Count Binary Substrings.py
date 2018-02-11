class Solution:
    def countBinarySubstrings(self, s):
        """
        :type s: str
        :rtype: int
        """
        last, now, ans = 0, 0, 0
        for i in range(len(s)):
            if s[i] == s[i-1]:
                now += 1
            else:
                last = now
                now = 1
            if last >= now:
                ans += 1
        return ans