class Solution:
    def toHex(self, num):
        """
        :type num: int
        :rtype: str
        """
        h = '0123456789abcdef'
        if num == 0:
            return '0'
        ans, cnt = '', 0
        while num and cnt < 8:
            ans += h[num & 0xf]
            num >>= 4
            cnt += 1
        return ans[::-1]