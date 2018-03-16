class Solution:
    def myAtoi(self, str):
        """
        :type str: str
        :rtype: int
        """
        str = str.strip()
        ans, flag = 0, 1
        for i in range(len(str)):
            if str[i] == '-':
                flag = -1
                i += 1
            elif str[i] == '+':
                i += 1
            while i<len(str) and str[i] >= '0' and str[i] <='9':
                ans = ans*10 + ord(str[i]) - ord('0')
                i += 1
                if ans*flag >= 2147483647:
                    return 2147483647
                if ans*flag <= -2147483648:
                    return -2147483648
            return ans*flag
        return ans