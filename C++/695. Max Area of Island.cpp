class Solution {
public:
    int vis[105][105];
    int bfs(int n,int m,int x,int y,vector<vector<int>>& grid)
    {
        
        queue<pair<int,int> >q;
        int dx[] = {0,1,-1,0};
        int dy[] = {1,0,0,-1};
        q.push({x,y});
        int cnt = 1;
        while(!q.empty())
        {
            pair<int,int> now = q.front();
            q.pop();
            for(int i=0;i<4;i++)
            {
                int tx = now.first+dx[i];
                int ty = now.second+dy[i];
                if(tx<0 || ty<0 || tx>=n || ty>=m)
                    continue;
                if(!vis[tx][ty] && grid[tx][ty])
                {
                    vis[tx][ty] = 1;
                    cnt++;
                    q.push({tx,ty});
                }
                    
            }
        }
        return cnt;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        memset(vis,0,sizeof(vis));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==0 && grid[i][j])
                {
                    vis[i][j] = 1;
                    ans = max(ans, bfs(n,m,i,j,grid));
                }
            }
        }
        return ans;
    }
};