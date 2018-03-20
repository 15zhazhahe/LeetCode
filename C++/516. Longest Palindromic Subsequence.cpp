class Solution {
public:
    int longestPalindromeSubseq(string s) {
        vector<vector<int> >dp(s.length(),vector<int>(s.length()));
        for(int j=0;j<s.length();j++)
        {
            dp[j][j]=1;
            for(int i=j-1;i>=0;i--)
            {
                if(s[i]==s[j])
                    dp[i][j] = dp[i+1][j-1] + 2;
                else
                    dp[i][j] = max(dp[i+1][j], dp[i][j-1]);
            }
        }
        return dp[0][s.length()-1];
    }
};