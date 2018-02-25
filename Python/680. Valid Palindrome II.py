class Solution:
    def validPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        def judge(s, l, r):
            while l < r:
                if s[l] != s[r]:
                    return False
                l += 1
                r -= 1
            return True
        l, r = 0, len(s) - 1
        while l < r:
            if s[l] != s[r]:
                return judge(s, l+1, r) or judge(s, l, r-1)
            l += 1
            r -= 1
        return True
            