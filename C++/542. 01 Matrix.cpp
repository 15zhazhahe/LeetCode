class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<vector<int> >ans(n, vector<int>(m, INT_MAX-1));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j] == 0)
                    ans[i][j] = 0;
                else
                {
                    ans[i][j] = min(ans[i][j], ans[i][max(0,j-1)]+1);
                    ans[i][j] = min(ans[i][j], ans[max(0,i-1)][j]+1);
                }
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                if(matrix[i][j] == 0)
                    ans[i][j] = 0;
                else
                {
                    ans[i][j] = min(ans[i][j], ans[min(i+1, n-1)][j]+1);
                    ans[i][j] = min(ans[i][j], ans[i][min(j+1, m-1)]+1);
                }
            }
            
        }
        return ans;
    }
};