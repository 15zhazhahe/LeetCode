class Solution:
    def numIslands(self, grid):
        """
        :type grid: List[List[str]]
        :rtype: int
        """
        if len(grid) == 0:
            return 0
        dx = [0, 1, -1, 0]
        dy = [1, 0, 0, -1]
        ans = 0
        n, m = len(grid), len(grid[0])
        for i in range(n):
            for j in range(m):
                if grid[i][j] == "1":
                    q = [[i,j]]
                    ans += 1
                    while len(q) > 0:
                        now = q.pop(0)[:]
                        for k in range(4):
                            tx = now[0] + dx[k]
                            ty = now[1] + dy[k]
                            if tx < 0 or ty < 0:
                                continue
                            if tx >=n or ty >= m:
                                continue
                            if grid[tx][ty] == "1":
                                grid[tx][ty] = "0"
                                q.append([tx, ty])
        return ans
                                