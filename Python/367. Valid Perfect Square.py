class Solution1:
    def isPerfectSquare(self, num):
        """
        :type num: int
        :rtype: bool
        """
        tmp = int(math.sqrt(num))
        return tmp*tmp == num

class Solution2:
    def isPerfectSquare(self, num):
        """
        :type num: int
        :rtype: bool
        """
        if num == 1:
            return True
        l, r = 0, num
        while l < r:
            mid = l + (r - l) // 2
            if mid * mid == num:
                return True
            elif mid * mid > num:
                r = mid
            else:
                l = mid + 1
        return False