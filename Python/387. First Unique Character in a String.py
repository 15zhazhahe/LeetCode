class Solution:
    def firstUniqChar(self, s):
        """
        :type s: str
        :rtype: int
        """
        ans = collections.Counter(s)
        for i in range(len(s)):
            if ans[s[i]] == 1:
                return i
        return -1