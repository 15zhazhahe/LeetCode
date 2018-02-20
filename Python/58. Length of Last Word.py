class Solution:
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        tmp = s.split()
        if len(tmp) == 0:
            return 0
        return len(tmp[-1])