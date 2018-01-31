// Time: O(n*m)
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int dx[] = {0,1,-1,0};
        int dy[] = {1,0,0,-1};
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j] == 1)
                {
                    int cnt = 4;
                    for(int k=0;k<4;k++)
                    {
                        int tx = i+dx[k],ty = j+dy[k];
                        if(tx<0 || ty<0 || tx>=n || ty>=m)
                            continue;
                        if(grid[tx][ty])
                            cnt--;
                    }
                    ans += cnt;
                }
            }
        }
        return ans;
    }
};