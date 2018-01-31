# Time: O(n*m)
class Solution:
    def islandPerimeter(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        ans = 0
        n, m = len(grid), len(grid[0])
        dx = [0, 1, -1, 0]
        dy = [1, 0, 0, -1]
        for i in range(n):
            for j in range(m):
                if grid[i][j] == 0:
                    continue
                cnt = 4
                for k in range(0,4):
                    tx = i + dx[k]
                    ty = j + dy[k]
                    if tx < 0 or ty < 0:
                        continue
                    if tx >= n or ty >= m:
                        continue
                    if grid[tx][ty] == 1:
                        cnt -= 1
                ans += cnt
        return ans