class Solution:
    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        s = set()
        while n != 1:
            ns = str(n)
            n = 0
            for c in ns:
                n += int(c)**2
            if n in s:
                return False
            s.add(n)
        return True