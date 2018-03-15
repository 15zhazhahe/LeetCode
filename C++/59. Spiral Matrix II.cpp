class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int> >ans(n, vector<int>(n));
        int rs = 0, re = n-1;
        int cs = 0, ce = n-1;
        int cnt = 1;
        while(rs <= re && cs <= ce)
        {
            for(int i=cs;i<=ce;i++)
                ans[rs][i] = cnt++;
            rs++;
            for(int i=rs;i<=re;i++)
                ans[i][ce] = cnt++;
            ce--;
            for(int i=ce;i>=cs;i--)
                ans[re][i] = cnt++;
            re--;
            for(int i=re;i>=rs;i--)
                ans[i][cs] = cnt++;
            cs++;
        }
        return ans;
    }
};