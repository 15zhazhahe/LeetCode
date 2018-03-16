class Solution:
    def convert(self, s, numRows):
        """
        :type s: str
        :type numRows: int
        :rtype: str
        """
        if numRows == 1:
            return s
        ans = ""
        for i in range(numRows):
            t1, t2 = 2 * i, 2 * (numRows - i - 1)
            k = i
            if t1 == 0 or t2 == 0:
                t1 = max(t1, t2)
                while  k < len(s):
                    ans += s[k]
                    k += t1
            else:
                while k < len(s):
                    ans += s[k]
                    k += t2
                    if k >= len(s):
                        break
                    ans += s[k]
                    k += t1
        return ans