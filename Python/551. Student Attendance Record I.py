class Solution:
    def checkRecord(self, s):
        """
        :type s: str
        :rtype: bool
        """
        f1, f2 = 0, 0
        for c in s:
            if c == 'A':
                f1 += 1
            if c == 'L':
                f2 += 1
            else:
                f2 = 0
            if f1 > 1 or f2 > 2:
                return False
        return True