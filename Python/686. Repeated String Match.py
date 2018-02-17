class Solution:
    def repeatedStringMatch(self, A, B):
        """
        :type A: str
        :type B: str
        :rtype: int
        """
        for i in range(len(B) // len(A) + 3):
            if B in A * i:
                return i
        return -1