class Solution:
    def reverseVowels(self, s):
        """
        :type s: str
        :rtype: str
        """
        vowels = set("aeoiuAEOIU")
        ans = list(s)
        l, r = 0, len(s) - 1
        while l < r:
            while l < len(s) and ans[l] not in vowels:
                l += 1
            while r >= 0 and ans[r] not in vowels:
                r -= 1
            if l < r:
                ans[l], ans[r] = ans[r], ans[l]
            l += 1
            r -= 1
        return ''.join(ans)