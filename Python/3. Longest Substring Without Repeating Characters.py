class Solution:
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        ans, last = 0, 0
        maple = dict()
        for i in range(len(s)):
            if maple.get(s[i], -1) != -1:
                last = max(last, maple[s[i]] + 1)
            maple[s[i]] = i
            ans = max(ans, i - last + 1)
        return ans