class Solution {
public:
    int minSteps(int n) {
        vector<int> dp(n+1);
        dp[1] = 0;
        dp[2] = 2;
        for(int i=2;i<=n;i++)
        {
            for(int j=i-1;j>=1;j--)
            {
                if(i%j==0)
                {
                    dp[i] = dp[j] + (i/j);
                    break;
                }
            }
        }
        return dp[n];
    }
};