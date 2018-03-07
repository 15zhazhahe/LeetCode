class Solution:
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: int
        """
        maple = dict()
        for c in s:
            maple[c] = maple.get(c, 0) + 1
        ans = 0
        for k in maple:
            ans += (maple[k] // 2) * 2
        if ans != len(s):
            ans += 1
        return ans
                