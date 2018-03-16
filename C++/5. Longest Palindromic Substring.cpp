class Solution {
public:
    string longestPalindrome(string s) {
        vector<vector<int> > dp(s.length()+1, vector<int>(s.length()+1));
        int ans = 0, start = 0;
        for(int j=0;j<s.length();j++)
        {
            for(int i=0;i<=j;i++)
            {
                if(s[i] == s[j] && (j-i+1 <= 3 || dp[i+1][j-1] == 1))
                    dp[i][j] = 1;
                if(dp[i][j] == 1 && j-i+1 > ans)
                {
                    ans = j-i+1;
                    start = i;
                }
            }
        }
        return s.substr(start,ans);
    }
};