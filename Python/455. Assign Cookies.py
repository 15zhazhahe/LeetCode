class Solution:
    def findContentChildren(self, g, s):
        """
        :type g: List[int]
        :type s: List[int]
        :rtype: int
        """
        g.sort()
        s.sort()
        l = r = ans = 0
        while l < len(g) and r < len(s):
            if g[l] <= s[r]:
                ans += 1
                l += 1
            r += 1
        return ans