class Solution:
    def convertToBase7(self, num):
        """
        :type num: int
        :rtype: str
        """
        if num == 0:
            return str(num)
        ans = list()
        tmp = list()
        if num < 0:
            ans.append('-')
            num = -num
        while num:
            tmp.append(str(num%7))
            num = num//7
        ans.extend(tmp[::-1])
        return ''.join(ans)