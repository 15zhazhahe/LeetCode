class Solution:
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        l, r = 0, len(s) - 1
        while l < r:
            while l < len(s) and s[l].isalnum() == False:
                l += 1
            while r >=0 and s[r].isalnum() == False:
                r -= 1
            if l >= len(s) and r < 0:
                break
            if s[l].upper() != s[r].upper():
                return False
            l += 1
            r -= 1
        return True