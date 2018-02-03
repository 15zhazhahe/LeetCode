class Solution:
    def maxAreaOfIsland(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        dx = [0, 1, -1, 0]
        dy = [1, 0, 0, -1]
        maple = dict()
        def bfs(r, c, x, y):
            q = list()
            q.append([x, y])
            maple[(x, y)] = 1
            cnt = 1
            while len(q) > 0:
                now = q.pop(0)
                for i in range(0,4):
                    tx = now[0] + dx[i]
                    ty = now[1] + dy[i]
                    if tx < 0 or ty < 0:
                        continue
                    if tx >= r or ty >= c:
                        continue
                    if maple.get((tx,ty)) is None and grid[tx][ty] == 1:
                        maple[(tx,ty)] = 1
                        q.append([tx,ty])
                        cnt += 1
            return cnt
                
        r = len(grid)
        c = len(grid[0])
        ans = 0
        for i in range(r):
            for j in range(c):
                if grid[i][j] == 1 and maple.get((i, j)) is None:
                    ans = max(ans,  bfs(r, c, i, j))
                   
        return ans