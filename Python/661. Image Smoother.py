class Solution:
    def imageSmoother(self, M):
        """
        :type M: List[List[int]]
        :rtype: List[List[int]]
        """
        ans = copy.deepcopy(M)
        dx = [1,0,0,-1,1,1,-1,-1]
        dy = [0,-1,1,0,-1,1,-1,1]
        n, m = len(M), len(M[0])
        for i in range(n):
            for j in range(m):
                s1, s2 = M[i][j], 1
                for k in range(8):
                    x = i + dx[k]
                    y = j + dy[k]
                    if x < 0 or x >= n:
                        continue
                    if y < 0 or y >= m:
                        continue
                    s1 += M[x][y]
                    s2 += 1
                ans[i][j] = int(s1/s2)
        return ans