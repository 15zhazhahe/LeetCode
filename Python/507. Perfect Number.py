class Solution:
    def checkPerfectNumber(self, num):
        """
        :type num: int
        :rtype: bool
        """
        if num <= 1:
            return False
        i, end = 2, int(math.sqrt(num))
        ans = 1
        while i <= end:
            if num % i == 0:
                ans += i + num / i
            i += 1
        return ans == num