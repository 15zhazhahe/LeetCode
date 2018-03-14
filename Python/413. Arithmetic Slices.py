class Solution:
    def numberOfArithmeticSlices(self, A):
        """
        :type A: List[int]
        :rtype: int
        """
        if len(A) < 3:
            return 0
        dp = [0, 0, 0]
        ans = 0
        if A[2] - A[1] == A[1] - A[0]:
            dp[2] = 1
        ans = dp[2]
        for i in range(3, len(A)):
            if A[i] - A[i-1] == A[i-1] - A[i-2]:
                dp.append(dp[i-1] + 1)
            else:
                dp.append(0)
            ans += dp[i]
        return ans
                    
                        
                