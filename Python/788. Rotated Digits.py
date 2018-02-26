class Solution:
    def rotatedDigits(self, N):
        """
        :type N: int
        :rtype: int
        """
        ans = 0
        for i in range(2,N+1):
            tmp = str(i)
            f1, f2, f3 = 0, 0, 0
            for c in tmp:
                if c in ['0', '1', '8']:
                    f1 = 1
                if c in ['3', '4', '7']:
                    f2 = 1
                    break
                if c in ['2', '5', '6', '9']:
                    f3 = 1
            if f2 != 1 and f3 == 1:
                ans += 1
        return ans