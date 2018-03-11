class Solution:
    def readBinaryWatch(self, num):
        """
        :type num: int
        :rtype: List[str]
        """
        ans = list()
        for i in range(12):
            for j in range(60):
                if (bin(i) + bin(j)).count('1') == num:
                    ans.append("%d:%02d" % (i, j))
        return ans