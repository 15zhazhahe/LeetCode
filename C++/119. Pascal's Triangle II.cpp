class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        int tmp = 1;
        ans.push_back(1);
        for(int i=1;i<=rowIndex;i++)
        {
            long long tmp = 1;
            for(int j=1, k=rowIndex;j<=i;k--,j++)
            {
                tmp *= k;
                tmp /= j;
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};