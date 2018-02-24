class Solution:
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        nex = [-1] * (len(needle)+1)
        k, i, j = -1, 0, 0
        while i < len(needle):
            if k == -1 or needle[i] == needle[k]:
                i += 1
                k += 1
                nex[i] = k
            else:
                k = nex[k]
        i = 0
        while i < len(haystack) and j < len(needle):
            if haystack[i] == needle[j]:
                i += 1
                j += 1
            elif j == 0:
                i += 1
            else:
                j = nex[j]
        if j == len(needle):
            return i - j
        return -1