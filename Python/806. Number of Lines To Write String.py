class Solution:
    def numberOfLines(self, widths, S):
        """
        :type widths: List[int]
        :type S: str
        :rtype: List[int]
        """
        row, col = 1, 0
        for c in S:
            width = widths[ord(c) - ord('a')]
            if col + width > 100:
                row += 1
                col = width
            else:
                col += width
        return [row, col]