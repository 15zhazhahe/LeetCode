class Solution:
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        if len(matrix) == 0:
            return False
        n, m = len(matrix), len(matrix[0])
        i, j = 0, m-1
        while i < n and j >= 0:
            if target == matrix[i][j]:
                return True
            elif target < matrix[i][j]:
                j -= 1
            elif target > matrix[i][j]:
                i += 1
        return False