class Solution:
    def countPrimes(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n == 0 or n == 1:
            return 0
        is_prime = [True] * n
        ans = 0
        is_prime[0] = is_prime[1] = False
        for i in range(2, n):
            if is_prime[i]:
                ans += 1
                for j in range(2*i, n, i):
                    is_prime[j] = False
        return ans
        