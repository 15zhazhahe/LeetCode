class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        int dx[] = {0,1,-1,0,1,1,-1,-1};
        int dy[] = {1,0,0,-1,1,-1,-1,1};
        int n = M.size(), m = M[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int s1 = M[i][j], s2 = 1;
                for(int k=0;k<8;k++)
                {
                    int x = i + dx[k];
                    int y = j + dy[k];
                    if(x<0 || x>=n || y<0 || y>=m)
                        continue;
                    s1 += (M[x][y] & 0xFF);
                    s2 += 1;
                }
                M[i][j] |= ((s1/s2) << 8);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                M[i][j] >>= 8;
        }
        return M;
    }
};