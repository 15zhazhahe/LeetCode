# Time: O(r*sqrt(r))
class Solution:
    def countPrimeSetBits(self, L, R):
        """
        :type L: int
        :type R: int
        :rtype: int
        """

        def is_prime(x):
            if x < 2:
                return False
            for i in range(2, x):
                if i*i > x:
                    break
                if x % i == 0:
                    return False
            return True

        ans = 0
        for i in range(L, R+1):
            cnt = bin(i).count('1')
            if is_prime(cnt):
                ans += 1
            print(cnt,is_prime(cnt))
        return ans