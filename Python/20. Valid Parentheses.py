class Solution:
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        ans = list()
        maple = {'}': '{', ')': '(', ']': '['}
        for c in s:
            if c in ['{', '[', '(']:
                ans.append(c)
            elif len(ans) == 0 or ans[-1] != maple[c]:
                return False
            else:
                ans.pop()
        return ans == []
                