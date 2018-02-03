class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int vis[100][100] = {0};
        int dx[] = {0,1,-1,0};
        int dy[] = {1,0,0,-1};
        int color = image[sr][sc];
        int n = image.size(),m = image[0].size();
        queue<pair<int,int> >q;
        q.push({sr,sc});
        vis[sr][sc] = 1;
        image[sr][sc] = newColor;
        while(!q.empty())
        {
            pair<int,int> now = q.front();
            q.pop();
            for(int i=0;i<4;i++)
            {
                int tx = now.first + dx[i];
                int ty = now.second + dy[i];
                if(tx<0 || ty<0 || tx>=n || ty>=m)
                    continue;
                if(image[tx][ty]==color && !vis[tx][ty])
                {
                    vis[tx][ty] = 1;
                    image[tx][ty] = newColor;
                    q.push({tx,ty});
                }
            }
        }
        return image;
    }
};