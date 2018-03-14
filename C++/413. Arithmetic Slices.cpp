class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        vector<int> dp(A.size(), 0);
        if(A.size() < 3)
            return 0;
        if(A[2] - A[1] == A[1]-A[0])
            dp[2] = 1;
        int ans = dp[2];
        for(int i=3;i<A.size();i++)
        {
            if(A[i]-A[i-1] == A[i-1]-A[i-2])
                dp[i] = dp[i-1] + 1;
            ans += dp[i];
        }
        return ans;
    }
};