class Solution:
    def setZeroes(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: void Do not return anything, modify matrix in-place instead.
        """
        n = len(matrix)
        if n == 0:
            return None
        m = len(matrix[0])
        f1, f2 = 0, 0
        for i in range(n):
            if matrix[i][0] == 0:
                f1 = 1
                break
        for i in range(m):
            if matrix[0][i] == 0:
                f2 = 1
                break
        for i in range(n):
            for j in range(m):
                if matrix[i][j] == 0:
                    matrix[i][0] = 0
                    matrix[0][j] = 0
        for i in range(1, n):
            if matrix[i][0] == 0:
                for j in range(m):
                    matrix[i][j] = 0
        for j in range(1, m):
            if matrix[0][j] == 0:
                for i in range(n):
                    matrix[i][j] = 0
        if f1:
            for i in range(n):
                matrix[i][0] = 0
        if f2:
            for i in range(m):
                matrix[0][i] = 0