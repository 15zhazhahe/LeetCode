class Solution:
    def isOneBitCharacter(self, bits):
        """
        :type bits: List[int]
        :rtype: bool
        """
        ans, i = True, 0
        while i < len(bits):
            if bits[i] == 1:
                i += 2
                ans = False
            else:
                i += 1
                ans = True
        return ans