class Solution {
public:
    int countSubstrings(string s) {
        int len = s.length();
        int ans = 0;
        vector<vector<int> > dp(len, vector<int>(len, 0));
        for(int j=0;j<s.length();j++)
        {
            for(int i=0;i<=j;i++)
            {
                if(s[i]==s[j])
                {
                    if(j - i < 2)
                        dp[i][j] = 1;
                    else
                        dp[i][j] = dp[i+1][j-1];
                }
                if(dp[i][j])
                    ans++;
            }
        }
        return ans;
    }
};