class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if(matrix.size() == 0)
            return ans;
        int rs = 0, cs = 0;
        int re = matrix.size()-1, ce = matrix[0].size() - 1;
        while(true)
        {
            for(int i=cs;i<=ce;i++)
                ans.push_back(matrix[rs][i]);
            rs++;
            if(rs > re) break;
            for(int i=rs;i<=re;i++)
                ans.push_back(matrix[i][ce]);
            ce--;
            if(ce < cs) break;
            for(int i=ce;i>=cs;i--)
                ans.push_back(matrix[re][i]);
            re--;
            if(re < rs) break;
            for(int i=re;i>=rs;i--)
                ans.push_back(matrix[i][cs]);
            cs++;
            if(cs>ce)
                break;
        }
        return ans;
    }
};