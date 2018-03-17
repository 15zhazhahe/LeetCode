class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int dx[] = {0, 0, 1, -1};
        int dy[] = {1, -1, 0, 0};
        if(grid.size()==0)
            return 0;
        int n = grid.size(), m = grid[0].size();
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j] == '0')
                    continue;
                ans += 1;
                queue<pair<int, int> >q;
                q.push(make_pair(i, j));
                while(!q.empty())
                {
                    pair<int, int> now = q.front();
                    q.pop();
                    for(int k=0;k<4;k++)
                    {
                        int tx = now.first + dx[k];
                        int ty = now.second + dy[k];
                        if(tx<0 || ty < 0 || tx>=n || ty>=m)
                            continue;
                        if(grid[tx][ty]=='1')
                        {
                            grid[tx][ty] = '0';
                            q.push(make_pair(tx, ty));
                        }
                    }
                }
            }
        }
        return ans;
    }
};