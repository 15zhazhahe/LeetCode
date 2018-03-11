class Solution:
    def rotateString(self, A, B):
        """
        :type A: str
        :type B: str
        :rtype: bool
        """
        A = A + A
        nex = [-1] * (len(B) + 1)
        i, k = 0, -1
        while i < len(B):
            if k == -1 or B[i] == B[k]:
                i += 1
                k += 1
                nex[i] = k
            else:
                k = nex[k]
        i = j = 0
        while i < len(A) and j < len(B):
            if A[i] == B[j]:
                i += 1
                j += 1
            elif j == 0:
                i += 1
            else:
                j = nex[j]
        return j == len(B)