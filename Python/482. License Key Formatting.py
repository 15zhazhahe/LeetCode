class Solution:
    def licenseKeyFormatting(self, S, K):
        """
        :type S: str
        :type K: int
        :rtype: str
        """
        s = S.upper().replace('-', '')
        last, ans = K, str()
        if len(s) % K != 0:
            last = len(s) % K
        ans = s[:last]
        for i in range(last, len(s), K):
            ans += '-' + s[i:i+K]
        return ans