class Solution:
    def repeatedSubstringPattern(self, s):
        """
        :type s: str
        :rtype: bool
        """
        nex = [-1] * (len(s) + 1)
        i, k = 0, -1
        while i < len(s):
            if k == -1 or s[i] == s[k]:
                i += 1
                k += 1
                nex[i] = k
            else:
                k = nex[k]
        return nex[len(s)] != 0 and nex[len(s)] % (len(s) - nex[len(s)]) == 0
