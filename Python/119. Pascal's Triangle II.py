class Solution:
    def getRow(self, rowIndex):
        """
        :type rowIndex: int
        :rtype: List[int]
        """
        ans = [1]
        for i in range(1, rowIndex + 1):
            k,tmp = rowIndex, 1
            for j in range(1, i+1):
                tmp *= k
                tmp //= j
                k -= 1
            ans.append(tmp)
        return ans
            